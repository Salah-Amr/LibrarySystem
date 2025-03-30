#include "User.h"
#include <sstream>
User::User() {
    username = email = password = "";
}
User::User(string username, string email, string password) : username(username), email(email), password(password) {

}
User::~User(){
    cout << "user \"" << username << "\" deleted successfully\n";
}
void User::displayInfo() const {
    ostringstream output;
    output << "Username: " << username << '\n'
           << "Email: " << email << '\n'
           << "Password: " << password << '\n'
           << "-----------------------------------------------------\n";
    cout << output.str();
}

string User::getUsername() const { return username; }
string User::getEmail() const { return email; }
string User::getPassword() const { return password; }
bool User::isEqual(const User& user) const {
    return (username == user.username &&
            email == user.email && password == user.password);
}