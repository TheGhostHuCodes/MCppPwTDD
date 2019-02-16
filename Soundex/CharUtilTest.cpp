#include "gmock/gmock.h"

#include "CharUtil.h"
#include <string>

using namespace std;
using namespace testing;
using namespace char_util;

TEST(AChar, IsAVowelForCharsSixSpecificUpperCaseLetters) {
    ASSERT_TRUE(is_vowel('A'));
    ASSERT_TRUE(is_vowel('E'));
    ASSERT_TRUE(is_vowel('I'));
    ASSERT_TRUE(is_vowel('O'));
    ASSERT_TRUE(is_vowel('U'));
    ASSERT_TRUE(is_vowel('Y'));
}

TEST(AChar, IsAVowelForCharsSixSpecificLowerCaseLetters) {
    ASSERT_TRUE(is_vowel('a'));
    ASSERT_TRUE(is_vowel('e'));
    ASSERT_TRUE(is_vowel('i'));
    ASSERT_TRUE(is_vowel('o'));
    ASSERT_TRUE(is_vowel('u'));
    ASSERT_TRUE(is_vowel('y'));
}

TEST(AChar, IsNotAVowelIfItIsAConsonant) { ASSERT_FALSE(is_vowel('b')); }

TEST(AChar, ReturnsUpperCaseCharacter) { ASSERT_THAT(upper('a'), Eq('A')); }

TEST(AChar, HandlesAlreadyUpperCaseCharacter) {
    ASSERT_THAT(upper('B'), Eq('B'));
}

TEST(AChar, IgnoresNonLettersWhenUppercasing) {
    ASSERT_THAT(upper('+'), Eq('+'));
}

TEST(AChar, ReturnsLowerCaseCharacter) { ASSERT_THAT(lower('A'), Eq('a')); }

TEST(AChar, HandlesAlreadyLowerCaseCharacter) {
    ASSERT_THAT(lower('b'), Eq('b'));
}

TEST(AChar, IgnoresNonLettersWhenLowercasing) {
    ASSERT_THAT(lower('+'), Eq('+'));
}
