#ifndef TWEET_H
#define TWEET_H

#include <string>

class Tweet {
public:
    Tweet(const std::string& message="", const std::string& user="")
        : message_(message)
        , user_(user) {
    }

    bool operator<(const Tweet& rhs) const {
        if (user_ == rhs.user_) return message_ < rhs.message_;
        else return user_ < rhs.user_;
    }

private:
    std::string message_;
    std::string user_;

};
#endif
