#include "Library.h"
Library::Library() {
    name = "";
    maximumBooksSize = maximumUsersSize = 0;
    books = {};
    users = {};
}
Library::Library(string name) : name(name) {

};
Library::Library(string name, vector <Book> books, vector <User> users) : name(name), books(books), users(users) {

};
Library::~Library() {
    cout << "library \"" << name << "\" deleted successfully\n";
}
void Library::displayInfo() const {
    cout << "Library Name: " << name << '\n';
    cout << "Number of users: " << maximumUsersSize << '\n';
    cout << "Users: " << '\n';
    for (const User& user: users) { user.displayInfo(); }
    cout << "Number of books: " << maximumBooksSize << '\n';
    cout << "Books: " << '\n';
    for (const Book& book: books) { book.displayInfo(); }
}
void Library::addUser(const User& newUser) {
    users.emplace_back(newUser);
    maximumUsersSize = (int)users.size();
    cout << "user added successfully\n";
}
void Library::deleteUser(const User& targetUser) {
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
        for (int i = index; i < maximumUsersSize - 1; i++) {
            users[i] = users[i + 1];
        }
        users.pop_back();
        maximumUsersSize--;
        cout << "user deleted successfully\n";
    }
}
void Library::updateUser(const User& oldUser, const User& user) {
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
void Library::addBook(const Book& newBook) {
    books.emplace_back(newBook);
    maximumBooksSize = (int)books.size();
    cout << "book added successfully\n";
}
void Library::addBook(Book* newBook) {
    books.emplace_back(*newBook);
    maximumBooksSize = (int)books.size();
    cout << "book added successfully\n";
}
void Library::deleteBook(const Book& targetBook) {
    int index = -1;
    for (int i = 0; i < maximumBooksSize; i++) {
        if (books[i].isEqual(targetBook)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "book not found\n";
    }
    else {
        for (int i = index; i < maximumBooksSize - 1; i++) {
            books[i] = books[i + 1];
        }
        books.pop_back();
        maximumBooksSize--;
        cout << "book deleted successfully\n";
    }
}
void Library::updateBook(const Book& oldBook, const Book& book) {
    int index = -1;
    for (int i = 0; i < maximumBooksSize; i++) {
        if (books[i].isEqual(oldBook)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "book not found\n";
    }
    else {
        books[index] = book;
        cout << "book updated successfully\n";
    }
}
void Library::displayUsers() const {
    for (const User& user : users) {
        user.displayInfo();
    }
}
void Library::displayBooks() const {
    for (const Book& book : books) {
        book.displayInfo();
    }
}
string Library::getName() const { return name; }
vector <Book> Library::getBooks() const { return books; }
vector <User> Library::getUsers() const { return users; }
int Library::getMaximumUsersSize() const { return maximumUsersSize; }
int Library::getMaximumBoosSize() const { return maximumBooksSize; }