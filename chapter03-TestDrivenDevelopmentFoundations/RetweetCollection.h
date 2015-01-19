#ifndef RETREETCOLLECTION_H
#define RETREETCOLLECTION_H

#include "Tweet.h"

class RetweetCollection {
public:
    RetweetCollection()
        : size_(0) {
        }

    bool isEmpty() const {
        return size() == 0;
    }

    unsigned int size() const {
        return size_;
    }

    void add(const Tweet& tweet) {
        size_ = 1;
    }

    void remove(const Tweet& tweet) {
        size_ = 0;
    }

private:
    unsigned int size_;
};
#endif
