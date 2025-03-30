#ifndef CPP_USERMANAGEMENT_H
#define CPP_USERMANAGEMENT_H
#include "User.h"
#include <vector>
class UserManagement {
private:
    User user;
    int maximumUsersSize;
    vector <User> users;
public:
    UserManagement(vector <User> users);
    UserManagement();
    void addUser(const User& newUser);
    void deleteUser(const User& targetUser);
    void updateUser(const User& oldUser, const User& user);
    int getMaximumUsersSize() const;
    vector<User> getUsers() const;
};
#endif //CPP_USERMANAGEMENT_H
