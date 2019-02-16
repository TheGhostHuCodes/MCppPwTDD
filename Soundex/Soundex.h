#pragma once

#include <string>
#include <unordered_map>

#include "CharUtil.h"
#include "StringUtil.h"

class Soundex {
  public:
    std::string encode(const std::string& word) const {
        return string_util::zero_pad(
            string_util::upper_front(string_util::head(word))
                + string_util::tail(encoded_digits(word)),
            MAX_CODE_LENGTH);
    };

    std::string encoded_digits(const std::string& word) const {
        std::string encoding;
        encode_head(encoding, word);
        encode_tail(encoding, word);
        return encoding;
    }

    void encode_head(std::string& encoding, const std::string& word) const {
        encoding += encoded_digit(word.front());
    }

    void encode_tail(std::string& encoding, const std::string& word) const {
        for (auto i = 1u; i < word.length(); i++) {
            if (!is_complete(encoding)) {
                encode_letter(encoding, word[i], word[i - 1]);
            }
        }
    }

    void encode_letter(std::string& encoding, char letter,
                       char last_letter) const {
        auto digit = encoded_digit(letter);
        if (digit != NOT_A_DIGIT
            && (digit != last_digit(encoding)
                || char_util::is_vowel(last_letter))) {
            encoding += digit;
        }
    }

    std::string encoded_digit(char letter) const {
        const std::unordered_map<char, std::string> encodings{
            {'b', "1"}, {'f', "1"}, {'p', "1"}, {'v', "1"}, {'c', "2"},
            {'g', "2"}, {'j', "2"}, {'k', "2"}, {'q', "2"}, {'s', "2"},
            {'x', "2"}, {'z', "2"}, {'d', "3"}, {'t', "3"}, {'l', "4"},
            {'m', "5"}, {'n', "5"}, {'r', "6"}};

        auto it = encodings.find(char_util::lower(letter));
        return it == encodings.end() ? NOT_A_DIGIT : it->second;
    }

  private:
    const std::string NOT_A_DIGIT{"*"};
    static const size_t MAX_CODE_LENGTH{4};

    bool is_complete(const std::string& encoding) const {
        return encoding.length() == MAX_CODE_LENGTH;
    }

    std::string last_digit(const std::string& encoding) const {
        if (encoding.empty()) {
            return NOT_A_DIGIT;
        } else {
            return std::string(1, encoding.back());
        }
    }
};
