#include "Library.h"
Library::Library() {
    name = "";
}
Library::Library(string name) : name(name) {

};
Library::Library(string name, vector <Book> books, vector <User> users) : name(name), userManagement(users), bookManagement(books) {

};
Library::~Library() {
    cout << "library \"" << name << "\" deleted successfully\n";
}
void Library::displayInfo() const {
    cout << "Library Name: " << name << '\n';
    cout << "Number of users: " << userManagement.getMaximumUsersSize() << '\n';
    cout << "Users: " << '\n';
    for (const User& user: userManagement.getUsers()) { user.displayInfo(); }
    cout << "Number of books: " << bookManagement.getMaximumBoosSize() << '\n';
    cout << "Books: " << '\n';
    for (const Book& book: bookManagement.getBooks()) { book.displayInfo(); }
}
void Library::addUser(const User& newUser) {
    userManagement.addUser(newUser);
}
void Library::deleteUser(const User& targetUser) {
    int index = -1;
    for (int i = 0; i < userManagement.getMaximumUsersSize(); i++) {
        if (userManagement.getUsers()[i].isEqual(targetUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    }
    else {
        for (int i = index; i < userManagement.getMaximumUsersSize() - 1; i++) {
            userManagement.getUsers()[i] = userManagement.getUsers()[i + 1];
        }
        userManagement.deleteUser(userManagement.getUsers().back());
        cout << "user deleted successfully\n";
    }
}
void Library::updateUser(const User& oldUser, const User& user) {
    int index = -1;
    for (int i = 0; i < userManagement.getMaximumUsersSize(); i++) {
        if (userManagement.getUsers()[i].isEqual(oldUser)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "user not found\n";
    }
    else {
        userManagement.updateUser(userManagement.getUsers()[index], user);
        cout << "user updated successfully\n";
    }
}
void Library::addBook(const Book& newBook) {
    bookManagement.addBook(newBook);
}
void Library::addBook(Book* newBook) {
    bookManagement.addBook(*newBook);
}
void Library::deleteBook(const Book& targetBook) {
    bookManagement.deleteBook(targetBook);
}
void Library::updateBook(const Book& oldBook, const Book& book) {
    bookManagement.updateBook(oldBook, book);
}
void Library::displayUsers() const {
    for (const User& user : userManagement.getUsers()) {
        user.displayInfo();
    }
}
void Library::displayBooks() const {
    for (const Book& book : bookManagement.getBooks()) {
        book.displayInfo();
    }
}
string Library::getName() const { return name; }
vector <Book> Library::getBooks() const { return bookManagement.getBooks(); }
vector <User> Library::getUsers() const { return userManagement.getUsers(); }
int Library::getMaximumUsersSize() const { return userManagement.getMaximumUsersSize(); }
int Library::getMaximumBoosSize() const { return bookManagement.getMaximumBoosSize(); }