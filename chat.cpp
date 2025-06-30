#include "Chat.h"

bool Chat::addUser(const std::string& login, const std::string& name) {
    if (users_.find(login) != users_.end()) {
        return false; // пользователь уже есть
    }
    users_.emplace(login, User(login, name));
    return true;
}

bool Chat::removeUser(const std::string& login) {
    auto it = users_.find(login);
    if (it != users_.end()) {
        users_.erase(it);
        return true;
    }
    return false;
}

bool Chat::sendMessage(const std::string& senderLogin, const std::string& messageText) {
    if (users_.find(senderLogin) == users_.end()) {
        return false; // пользователь не найден
    }
    messages_.emplace_back(senderLogin, messageText);
    return true;
}

std::vector<Message> Chat::getMessages() const {
    return std::vector<Message>(messages_.begin(), messages_.end());
}

std::vector<User> Chat::getUsers() const {
    std::vector<User> userList;
    for (const auto& pair : users_) {
        userList.push_back(pair.second);
    }
    return userList;
}
