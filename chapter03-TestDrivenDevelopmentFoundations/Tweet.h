#ifndef TWEET_H
#define TWEET_H

#include <string>

class Tweet {
public:
    Tweet(const std::string& message="", const std::string& user="")
        : message_(message)
        , user_(user) {
    }

private:
    std::string message_;
    std::string user_;

};
#endif
