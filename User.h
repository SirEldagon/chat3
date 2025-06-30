#ifndef USER_H
#define USER_H

#include <string>

class User {
public:
    User(const std::string& login, const std::string& name)
        : login_(login), name_(name) {}

    std::string getLogin() const { return login_; }
    std::string getName() const { return name_; }

private:
    std::string login_;
    std::string name_;
};

#endif // USER_H
