#include "UserManagement.h"

UserManagement::UserManagement(vector<User*> users) : users(users), maximumUsersSize((int)users.size()) {}

UserManagement::UserManagement() {
    users = {};
    maximumUsersSize = 0;
}
UserManagement::~UserManagement() {
    for (User* user : users) {
        delete user;
    }
    users.clear();
}

void UserManagement::addUser(const User& newUser) {
    users.push_back(new User(newUser));
    maximumUsersSize = (int)users.size();
    cout << "user added successfully\n";
}

// حذف مستخدم من القائمة
void UserManagement::deleteUser(const User& targetUser) {
    int index = -1;
    for (int i = 0; i < maximumUsersSize; i++) {
        if (users[i]->isEqual(targetUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    } else {
        delete users[index];
        users.erase(users.begin() + index);
        maximumUsersSize--;
        cout << "user deleted successfully\n";
    }
}
void UserManagement::updateUser(const User& oldUser, const User& updatedUser) {
    int index = -1;
    for (int i = 0; i < maximumUsersSize; i++) {
        if (users[i]->isEqual(oldUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    } else {
        *(users[index]) = updatedUser;
        cout << "user updated successfully\n";
    }
}
int UserManagement::getMaximumUsersSize() const {
    return maximumUsersSize;
}
vector<User*> UserManagement::getUsers() const {
    return users;
}