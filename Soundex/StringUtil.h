#ifndef STRINGUTIL_H
#define STRINGUTIL_H

#include <string>

namespace stringutil {
    std::string head(const std::string& word);
    std::string tail(const std::string& word);
    std::string zeroPad(const std::string& text, unsigned int toLength);
    std::string upperFront(const std::string& string);
}
#endif
