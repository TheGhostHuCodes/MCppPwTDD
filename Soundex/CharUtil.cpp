#include "CharUtil.h"

#include <string>

using namespace std;

namespace charutil {
    bool isVowel(char letter) {
        return string("aeiouy").find(lower(letter)) != string::npos;
    }

    char upper(char ch) {
        return toupper(static_cast<unsigned char>(ch));
    }

    char lower(char ch) {
        return tolower(static_cast<unsigned char>(ch));
    }
}
