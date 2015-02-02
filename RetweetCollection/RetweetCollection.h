#ifndef RETREETCOLLECTION_H
#define RETREETCOLLECTION_H

#include "Tweet.h"
#include <set>

class RetweetCollection {
public:
    RetweetCollection()
        : size_(0) {
    }

    bool isEmpty() const {
        return size() == 0;
    }

    unsigned int size() const {
        return tweets.size();
    }

    void add(const Tweet& tweet) {
        tweets.insert(tweet);
        ++size_;
    }

    void remove(const Tweet& tweet) {
        tweets.erase(tweet);
    }

private:
    unsigned int size_;
    std::set<Tweet> tweets;
};
#endif
