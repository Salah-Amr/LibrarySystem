#ifndef CPP_USERMANAGEMENT_H
#define CPP_USERMANAGEMENT_H
#pragma once
#include "User.h"
#include <vector>
class UserManagement {
private:
    int maximumUsersSize;
    vector<User*> users;
public:
    UserManagement(vector<User*> users);
    UserManagement();
    ~UserManagement();
    void addUser(const User& newUser);
    void deleteUser(const User& targetUser);
    void updateUser(const User& oldUser, const User& user);
    int getMaximumUsersSize() const;
    vector<User*> getUsers() const; // تعديل نوع الإرجاع ليكون vector<User*>
};
#endif //CPP_USERMANAGEMENT_H
