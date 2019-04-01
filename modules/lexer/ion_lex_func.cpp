//
// Created by iffi on 19-3-17.
//
#include <cstdlib>
#include <cstring>
#include <ion_lex_func.h>

size_t removeUnderscore(char *string, int length) {
    // remove underscores from text
    size_t real_len = (size_t)length;
    for (size_t i=0; i<real_len; i++) {
        if (string[i] == '_') {
            memcpy(string+i, string+i+1, real_len-i-1);
            real_len--;
        }
    }

    // set '\0' terminator
    string[real_len] = 0;
    return real_len;
}

std::string processEscapes(std::string &input) {
    std::string output = "";
    std::string::size_type pos;
    size_t num_size;
    char escape_val;
    // process escapes
    while ((pos = input.find_first_of("\\")) != std::string::npos) {
        output += input.substr(0, pos);

        switch (input[pos + 1]) {
            case '\\':
                output += "\\";
                break;
            case '\'':
                output += "'";
                break;
            case '"':
                output += "\"";
                break;
            case 'a':
                output += "\a";
                break;
            case 'b':
                output += "\b";
                break;
            case 'f':
                output += "\f";
                break;
            case 'n':
                output += "\n";
                break;
            case 'r':
                output += "\r";
                break;
            case 't':
                output += "\t";
                break;
            case 'v':
                output += "\v";
                break;
            case 'x':
                output.push_back((char)std::stoi(input.substr(pos, 2), &num_size, 16));
                if (num_size != 2)
                    throw "Truncated hex escape";
                else
                    pos += 2;
            default:
                if (input[pos + 1] >= '0' && input[pos + 1] <= '7') {
                    escape_val = (char)std::stoi(input.substr(pos, 3), &num_size, 8);
                    if (num_size != 3)
                        throw "Truncated octal escape"; // different from python
                    output.push_back(escape_val);
                    pos += 2;
                }
                else {
                    // back slash is ignored, different from python
                    output += input[pos + 1];
                }
                break;
        }

        input = input.substr(pos + 2, input.length() - 2);
    }

    output += input;
    return output;
}