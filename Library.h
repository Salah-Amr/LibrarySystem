#ifndef CPP_LIBRARY_H
#pragma once
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
    static Library* instance;
    string name;
    UserManagement userManagement;
    BookManagement bookManagement;
    Library() {}
public:
    static Library* getInstance() {
        if (!instance) instance = new Library();
        return instance;
    }
    ~Library();
    void displayInfo() const;
    void addUser(const User& newUser);
    void deleteUser(const User& targetUser);
    void updateUser(const User& oldUser, const User& user);
    void addBook(const Book& newBook);
    void deleteBook(const Book& targetBook);
    void updateBook(const Book& oldBook, const Book& book);
    void displayUsers() const;
    void displayBooks() const;
    string getName() const;
    void setName(string _name);
    const vector<Book *> getBooks() const;
    vector<User*> getUsers() const;
    int getMaximumUsersSize() const;
    int getMaximumBooksSize() const;
};
#endif
