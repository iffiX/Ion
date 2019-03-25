#include <ion_par.h>
#include <ion.tab.h>

namespace Ion {
    IonParser::IonParser() : parser(nullptr, &_manager){
        _logger = spdlog::stderr_color_st("Ion");
        _logger->set_pattern("[Parser] %v");
    }

    IonParser::IonParser(std::string &filename)
            : parser(new IonLexer(filename), &_manager), _is_lexer_new(true) {
        _logger = spdlog::stderr_color_st("Ion");
        _logger->set_pattern("[Parser] %v");
    }

    IonParser::IonParser(IonLexer &l) : parser(&l, &_manager) {
        _logger = spdlog::stderr_color_st("Ion");
        _logger->set_pattern("[Parser] %v");
    }

    void IonParser::setLexer(IonLexer &l) {
        if (_is_lexer_new)
            delete lexer;
        _is_lexer_new = false;
        lexer = &l;
    }

    IonParser::~IonParser() {
        if (_is_lexer_new)
            delete lexer;
    }

    void IonParser::error(const location_type &loc, const std::string &msg) {
        _logger->error(lexer->formatError(loc, msg));
        throw std::runtime_error("Parser error");
    }
}