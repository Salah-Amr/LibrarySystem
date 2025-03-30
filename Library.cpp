#include "Library.h"
Library* Library::instance = nullptr;
Library::~Library() {
    cout << "library \"" << name << "\" deleted successfully\n";
}
void Library::displayInfo() const {
    cout << "Library Name: " << name << '\n';
    cout << "Number of users: " << userManagement.getMaximumUsersSize() << '\n';
    cout << "Users: " << '\n';
    for (const User* user: userManagement.getUsers()) {
        user->displayInfo();
    }
    cout << "Number of books: " << bookManagement.getMaximumBooksSize() << '\n';
    cout << "Books: " << '\n';
    for (const Book* book : bookManagement.getBooks()) {
        book->displayInfo();
    }
}
void Library::addUser(const User& newUser) {
    userManagement.addUser(newUser);
}
void Library::deleteUser(const User& targetUser) {
    userManagement.deleteUser(targetUser);
}
void Library::updateUser(const User& oldUser, const User& user) {
    userManagement.updateUser(oldUser, user);
}
void Library::addBook(const Book& newBook) {
    bookManagement.addBook(newBook);
}
void Library::deleteBook(const Book& targetBook) {
    bookManagement.deleteBook(targetBook);
}
void Library::updateBook(const Book& oldBook, const Book& book) {
    bookManagement.updateBook(oldBook, book);
}
void Library::displayUsers() const {
    const vector<User*>& users = userManagement.getUsers();
    for (const User* user: userManagement.getUsers()) {
        user->displayInfo();
    }
}
void Library::displayBooks() const {
    for (const Book* book : bookManagement.getBooks()) {
        book->displayInfo();
    }
}
string Library::getName() const { return name; }
void Library::setName(string _name) { name = _name; }
const vector<Book *> Library::getBooks() const { return bookManagement.getBooks(); }
vector<User*> Library::getUsers() const { return userManagement.getUsers(); }
int Library::getMaximumUsersSize() const { return userManagement.getMaximumUsersSize(); }
int Library::getMaximumBooksSize() const { return bookManagement.getMaximumBooksSize(); }