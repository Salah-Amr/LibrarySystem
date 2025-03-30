#ifndef CPP_LIBRARY_H
#define CPP_LIBRARY_H
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include "Book.h"
#include "User.h"
#include "UserManagement.h"
#include "BookManagement.h"
class Library {
private:
    string name;
    UserManagement userManagement;
    BookManagement bookManagement;
public:
    Library();
    Library(string name);
    Library(string name, vector <Book> books, vector <User> users);
    ~Library();
    void displayInfo() const;
    void addUser(const User& newUser);
    void deleteUser(const User& targetUser);
    void updateUser(const User& oldUser, const User& user);
    void addBook(const Book& newBook);
    void addBook(Book* newBook);
    void deleteBook(const Book& targetBook);
    void updateBook(const Book& oldBook, const Book& book);
    void displayUsers() const;
    void displayBooks() const;
    string getName() const;
    vector <Book> getBooks() const;
    vector <User> getUsers() const;
    int getMaximumUsersSize() const;
    int getMaximumBoosSize() const;
};
#endif
