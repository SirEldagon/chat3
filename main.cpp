#include <iostream>
#include "Chat.h"

int main() {
    Chat chat;

    // Регистрация пользователей
    chat.addUser("john_doe", "John Doe");
    chat.addUser("alice", "Alice");
    chat.addUser("bob", "Bob");

    // Отправка сообщений
    chat.sendMessage("john_doe", "Привет, как дела?");
    chat.sendMessage("alice", "Всё хорошо, спасибо!");
    chat.sendMessage("bob", "Привет всем!");

    // Вывод сообщений
    std::cout << "Сообщения в чате:\n";
    for (const auto& msg : chat.getMessages()) {
        std::cout << "[" << msg.getTime() << "] "
                  << msg.getSender() << ": "
                  << msg.getText() << "\n";
    }

    // Вывод списка пользователей
    std::cout << "\nПользователи:\n";
    for (const auto& user : chat.getUsers()) {
        std::cout << "- " << user.getName() << " (" << user.getLogin() << ")\n";
    }

    return 0;
}
