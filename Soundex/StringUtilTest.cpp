#include "StringUtil.h"
#include "gmock/gmock.h"

using namespace std;
using namespace testing;
using namespace string_util;

TEST(AString, ReturnsItsFirstLetterAsHead) {
    ASSERT_THAT(head("xyz"), Eq("x"));
}

TEST(AString, ReturnsEmptyStringHeadWhenStringIsEmpty) {
    ASSERT_THAT(head(""), Eq(""));
}

TEST(AString, ReturnsAllButItsFirstLetterAsTail) {
    ASSERT_THAT(tail("abc"), Eq("bc"));
}

TEST(AString, ReturnsEmptyStringTailWhenStringIsEmpty) {
    ASSERT_THAT(tail(""), Eq(""));
}

TEST(AString, ReturnsEmptyStringTailWhenStringIsOnlyOneCharacterLong) {
    ASSERT_THAT(tail("B"), Eq(""));
}
