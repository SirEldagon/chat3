#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <chrono>
#include <ctime>

class Message {
public:
    Message(const std::string& sender, const std::string& text)
        : sender_(sender), text_(text), timestamp_(std::chrono::system_clock::now()) {}

    std::string getSender() const { return sender_; }
    std::string getText() const { return text_; }
    std::string getTime() const {
        std::time_t time = std::chrono::system_clock::to_time_t(timestamp_);
        return std::ctime(&time);
    }

private:
    std::string sender_;
    std::string text_;
    std::chrono::system_clock::time_point timestamp_;
};

#endif // MESSAGE_H
