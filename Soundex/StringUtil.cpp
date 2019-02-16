#include "StringUtil.h"
#include "CharUtil.h"

namespace string_util {

std::string head(const std::string& word) { return word.substr(0, 1); }

std::string tail(const std::string& word) {
    return word.length() != 0 ? word.substr(1) : "";
}

std::string zero_pad(const std::string& text, unsigned int to_length) {
    auto zeros_needed = to_length - text.length();
    return text + std::string(zeros_needed, '0');
}

std::string upper_front(const std::string& string) {
    return std::string(1, char_util::upper(string.front()));
}

} // namespace string_util
