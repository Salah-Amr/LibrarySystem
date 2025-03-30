#include "UserManagement.h"
UserManagement::UserManagement(vector <User> users) : users(users), maximumUsersSize((int)users.size()) {};
UserManagement::UserManagement() {
    users = {};
    maximumUsersSize = 0;
};
void UserManagement::addUser(const User& newUser) {
    users.emplace_back(newUser);
    maximumUsersSize = (int)users.size();
    cout << "user added successfully\n";
}
void UserManagement::deleteUser(const User& targetUser) {
    int index = -1;
    for (int i = 0; i < maximumUsersSize; i++) {
        if (users[i].isEqual(targetUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    }
    else {
        users.erase(users.begin() + index);
        maximumUsersSize--;
        cout << "user deleted successfully\n";
    }
}
void UserManagement::updateUser(const User& oldUser, const User& user) {
    int index = -1;
    for (int i = 0; i < maximumUsersSize; i++) {
        if (users[i].isEqual(oldUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    }
    else {
        users[index] = user;
        cout << "user updated successfully\n";
    }
}
int UserManagement::getMaximumUsersSize() const {
    return maximumUsersSize;
}
const vector<User>& UserManagement::getUsers() const {
    return users;
}