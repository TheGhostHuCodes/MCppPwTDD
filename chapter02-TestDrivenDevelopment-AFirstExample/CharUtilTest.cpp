#include "gmock/gmock.h"

#include <string>
#include "CharUtil.h"

using namespace std;
using namespace testing;
using namespace charutil;

TEST(CharUtil, IsAVowelReturnsTrueForUpperCaseVowels) {
    ASSERT_TRUE(isVowel('A'));
    ASSERT_TRUE(isVowel('E'));
    ASSERT_TRUE(isVowel('I'));
    ASSERT_TRUE(isVowel('O'));
    ASSERT_TRUE(isVowel('U'));
    ASSERT_TRUE(isVowel('Y'));
}

TEST(CharUtil, IsAVowelReturnsTrueForLowerCaseVowels) {
    ASSERT_TRUE(isVowel('a'));
    ASSERT_TRUE(isVowel('e'));
    ASSERT_TRUE(isVowel('i'));
    ASSERT_TRUE(isVowel('o'));
    ASSERT_TRUE(isVowel('u'));
    ASSERT_TRUE(isVowel('y'));
}

TEST(CharUtil, IsAVowelReturnsFalseForConsonants) {
    ASSERT_FALSE(isVowel('b'));
}

TEST(CharUtil, UpperReturnsUpperCaseCharacter) {
    ASSERT_THAT(upper('a'), Eq('A'));
}

TEST(CharUtil, UpperReturnsAlreadyUpperCaseCharacter) {
    ASSERT_THAT(upper('B'), Eq('B'));
}

TEST(CharUtil, UpperIgnoresNonLetters) {
    ASSERT_THAT(upper('+'), Eq('+'));
}

TEST(CharUtil, LowerReturnsLowerCaseCharacter) {
    ASSERT_THAT(lower('A'), Eq('a'));
}

TEST(CharUtil, LowerReturnsAlreadyLowerCaseCharacter) {
    ASSERT_THAT(lower('b'), Eq('b'));
}

TEST(CharUtil, LowerIgnoresNonLetters) {
    ASSERT_THAT(lower('+'), Eq('+'));
}
