#include <memory>
#include "gmock/gmock.h"
#include "RetweetCollection.h"
#include "Tweet.h"

using namespace ::testing;

class ARetweetCollection: public Test {
public:
    RetweetCollection collection;
};

class ARetweetCollectionWithOneTweet: public Test {
public:
    RetweetCollection collection;
    std::shared_ptr<Tweet> tweet;

    void SetUp() override {
        tweet = std::shared_ptr<Tweet>(new Tweet("msg", "@user"));
        collection.add(*tweet);
    }
};

MATCHER_P(HasSize, expected, "") {
    return arg.size() == expected
        && arg.isEmpty() == (expected == 0);
}

TEST_F(ARetweetCollection, IsEmptyWhenCreated) {
    ASSERT_TRUE(collection.isEmpty());
}

TEST_F(ARetweetCollection, HasSizeZeroWhenCreated) {
    ASSERT_THAT(collection.size(), Eq(0u));
}

TEST_F(ARetweetCollectionWithOneTweet, IsNotEmpty) {
    ASSERT_FALSE(collection.isEmpty());
}

TEST_F(ARetweetCollectionWithOneTweet, DecreasesSizeAfterRemovingTweet) {
    collection.remove(Tweet("msg", "@user"));

    ASSERT_THAT(collection, HasSize(0u));
}

TEST_F(ARetweetCollection, IsEmptyWhenItsSizeIsZero) {
    ASSERT_THAT(collection.size(), Eq(0u));
    ASSERT_TRUE(collection.isEmpty());
}

TEST_F(ARetweetCollectionWithOneTweet, IsNotEmptyWhenItsSizeIsNonZero) {
    ASSERT_THAT(collection.size(), Gt(0u));
    ASSERT_FALSE(collection.isEmpty());
}

TEST_F(ARetweetCollection, IncrementsSizeWhenTweetIsAdded) {
    Tweet first("message1", "@user");
    collection.add(first);
    Tweet second("message2", "@user");

    collection.add(second);

    ASSERT_THAT(collection.size(), Eq(2));
}

TEST_F(ARetweetCollectionWithOneTweet, IgnoresDuplicateTweetAdded) {
    Tweet duplicate(*tweet);

    collection.add(duplicate);

    ASSERT_THAT(collection.size(), Eq(1u));
}
