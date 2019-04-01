#include <ion_par.h>
#include <ion.tab.h>

namespace Ion {
    IonParser::IonParser() : parser(nullptr, &_manager, &_root){
        _logger = spdlog::stdout_color_st("Ion-parser");
        _logger->set_pattern("[Parser] %v");
    }

    IonParser::IonParser(const std::string filename)
            : parser(new IonLexer(filename), &_manager, &_root), _is_lexer_new(true) {
        _logger = spdlog::stdout_color_st("Ion-parser");
        _logger->set_pattern("[Parser] %v");
    }

    IonParser::IonParser(IonLexer &l) : parser(&l, &_manager, &_root) {
        _logger = spdlog::stdout_color_st("Ion-parser");
        _logger->set_pattern("[Parser] %v");
    }

    IonParser::~IonParser() {
        if (_is_lexer_new)
            delete lexer;
        _manager.destroyNodes();
    }

    void IonParser::setLexer(IonLexer &l) {
        if (_is_lexer_new)
            delete lexer;
        _is_lexer_new = false;
        lexer = &l;
    }

    ASTNode* IonParser::getTree() {
        return _root;
    }

    void IonParser::error(const location_type &loc, const std::string &msg) {
        _logger->error(lexer->formatError(loc, msg));
        throw std::runtime_error("Parser error");
    }
}