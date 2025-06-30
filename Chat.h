#ifndef CHAT_H
#define CHAT_H

#include "User.h"
#include "Message.h"
#include <vector>
#include <map>
#include <list>
#include <string>

class Chat {
public:
    // Регистрация нового пользователя
    bool addUser(const std::string& login, const std::string& name);

    // Удаление пользователя
    bool removeUser(const std::string& login);

    // Отправка сообщения
    bool sendMessage(const std::string& senderLogin, const std::string& messageText);

    // Получение сообщений
    std::vector<Message> getMessages() const;

    // Получение списка пользователей
    std::vector<User> getUsers() const;

private:
    std::map<std::string, User> users_; // логин -> User
    std::list<Message> messages_;       // список сообщений
};

#endif // CHAT_H
