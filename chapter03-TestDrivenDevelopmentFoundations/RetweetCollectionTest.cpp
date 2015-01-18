#include "gmock/gmock.h"
#include "RetweetCollection.h"

TEST(ARetweetCollection, IsEmptyWhenCreated) {
    RetweetCollection retweets;
    ASSERT_TRUE(retweets.isEmpty());
}
