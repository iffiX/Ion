#include <ion_lex.h>
#include <ion.lex.h>
namespace Ion {
    IonLexer::IonLexer() {
        yylex_init(&_lexer);
        yyset_extra(&_lexer_st, _lexer);
        _lexer_st.major_offset = 0;
        _lexer_st.minor_offset = 0;
        _logger = spdlog::stderr_color_st("Ion");
        _logger->set_pattern("[Lexer] %v");
    }

    IonLexer::IonLexer(std::string &filename) {
        yylex_init(&_lexer);
        yyset_extra(&_lexer_st, _lexer);
        _lexer_st.major_offset = 0;
        _lexer_st.minor_offset = 0;
        _logger = spdlog::stderr_color_st("Ion");
        _logger->set_pattern("[Lexer] %v");
        openFile(filename);
        _filename = filename;
    }

    IonLexer::~IonLexer() {
        _lexer_st.input.close();
        yylex_destroy(_lexer);
    }

    bool IonLexer::openFile(std::string &filename) {
        if (_lexer_st.input.is_open())
            _lexer_st.input.close();
        _lexer_st.input.open(filename);
        _filename = filename;
        _lexer_st.major_offset = 0;
        _lexer_st.minor_offset = 0;
        return _lexer_st.input.is_open();
    }

    int IonLexer::lex(Token *token, Location *location) {
        if (!_lexer_st.input.is_open())
            throw std::runtime_error("File not opened");

        _lexer_st.token = token;
        int code = yylex(&_lexer);
        int row = yyget_lineno(_lexer);
        int col = yyget_column(_lexer);
        location->begin.initialize(&_filename, (unsigned)row, (unsigned)col);
        location->end.initialize(&_filename, (unsigned)row, (unsigned)(col + yyget_leng(_lexer)));
        if (code == ERROR) {
            _logger->error(formatError(*location, _lexer_st.err_msg));
            throw std::runtime_error("Lexer error");
        } else
            return code;
    }
    std::string IonLexer::formatError(const Location &loc, const std::string &msg) {
        std::string err_input = "    ";
        std::string err_pointer = "    ";
        std::streambuf *buff = _lexer_st.input.rdbuf();

        _lexer_st.input.rdbuf()->pubseekpos(_lexer_st.major_offset);

        char c = (char) buff->sgetc();
        while (c != EOF && c != '\n') {
            err_input.push_back(c);
            c = (char) buff->sbumpc();
        }
        for (size_t i = 0; i < loc.begin.column; i++)
            err_pointer.push_back(' ');
        if (loc.end.line == loc.begin.line && loc.end.column > loc.begin.column) {
            for (size_t j = loc.begin.column; j < loc.end.column; j++)
                err_pointer += '^';
        }
        else
            err_pointer += '^';

        // restore pointer
        buff->pubseekpos(_lexer_st.major_offset + _lexer_st.minor_offset);

        // log
        return fmt::format("Error detected at File <{:s}> Line {:d}\n{:s}\n{:s}\n    Error: {:s}",
                            _filename, loc.begin.line, err_input, err_pointer, msg);
    }
}