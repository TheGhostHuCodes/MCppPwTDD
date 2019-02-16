#pragma once

#include <string>

namespace string_util {
std::string head(const std::string& word);
std::string tail(const std::string& word);
std::string zero_pad(const std::string& text, unsigned int to_length);
std::string upper_front(const std::string& string);
} // namespace string_util
