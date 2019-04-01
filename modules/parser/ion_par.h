#ifndef ION_PARSER_H
#define ION_PARSER_H
#include <thread>
#include <ion_def.h>
#include <ion_lex.h>
#include <ion.tab.h>
#include <lib/spdlog/spdlog.h>
#include <lib/spdlog/sinks/stdout_color_sinks.h>
namespace Ion {
    class IonParser : public yy::parser {
    public:
        IonParser();
        explicit IonParser(std::string filename);
        explicit IonParser(IonLexer &lexer);
        IonParser(const IonParser &parser) = delete;
        ~IonParser() override ;

        void setLexer(IonLexer &lexer);

        ASTNode* getTree();
        /// overloaded error reporting function, do not call!
        void error (const Location& loc, const std::string& msg) override;
    private:
        bool _is_lexer_new = false;
        ASTNode *_root = nullptr;
        ASTManager _manager;
        std::shared_ptr <spdlog::logger> _logger;
    };
}
#endif //ION_PARSER_H
