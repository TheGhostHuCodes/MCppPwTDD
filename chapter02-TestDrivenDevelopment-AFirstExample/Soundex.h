#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

class Soundex {
public:
    std::string encode(const std::string& word) const {
        return zeroPad(head(word) + encodedDigits(word));
    }

private:
    std::string head(const std::string& word) const {
        return word.substr(0, 1);
    }

    std::string encodedDigits(const std::string& word) const {
            if (word.length() > 1) return encodedDigit();
            else return "";
    }

    std::string encodedDigit() const {
        return "1";
    }

    static const size_t maxCodeLength{4};

    std::string zeroPad(const std::string& word) const {
        auto zerosNeeded = maxCodeLength - word.length();
        return word + std::string(zerosNeeded, '0');
    }
};
#endif
