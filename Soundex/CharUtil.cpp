#include "CharUtil.h"

#include <string>

namespace char_util {

bool is_vowel(char letter) {
    return std::string("aeiouy").find(lower(letter)) != std::string::npos;
}

char upper(char c) { return std::toupper(static_cast<unsigned char>(c)); }

char lower(char c) { return std::tolower(static_cast<unsigned char>(c)); }

} // namespace char_util
