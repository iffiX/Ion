#ifndef ION_LEX_H
#define ION_LEX_H
#include <thread>
#include <ion_def.h>
#include <lib/spdlog/spdlog.h>
#include <lib/spdlog/sinks/stdout_color_sinks.h>

namespace Ion {
    class IonLexer {
    public:
        IonLexer();

        explicit IonLexer(std::string &filename);

        IonLexer(const IonLexer &lexer) = delete;

        ~IonLexer();

        bool openFile(std::string &filename);

        int lex(Token *token, Location *location);

        std::string formatError(const Location& loc, const std::string& msg);
    private:
        yyscan_t _lexer;
        LexerState _lexer_st;
        std::string _filename;
        std::shared_ptr <spdlog::logger> _logger;
    };
}
#endif //ION_LEX_H
