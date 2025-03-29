#include "User.h"
User::User() {
    username = email = password = "";
}
User::User(string username, string email, string password) : username(username), email(email), password(password) {

}
User::~User(){
    cout << "user \"" << username << "\" deleted successfully\n";
}
void User::displayInfo() const {
    cout << "Username: " << username << '\n';
    cout << "Email: " << email << '\n';
    cout << "Password: " << password << '\n';
    cout << "-----------------------------------------------------\n";
}
string User::getUsername() const { return username; }
string User::getEmail() const { return email; }
string User::getPassword() const { return password; }
bool User::isEqual(User user) const {
    return (username == user.username &&
            email == user.email && password == user.password);
}