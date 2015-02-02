#include "gmock/gmock.h"
#include "StringUtil.h"

using namespace std;
using namespace testing;
using namespace stringutil;

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
