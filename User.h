#ifndef CPP_USER_H
#define CPP_USER_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
class User {
private:
    string username;
    string email;
    string password;
public:
    User();
    User(string username, string email, string password);
    ~User();
    void displayInfo() const;
    string getUsername() const;
    string getEmail() const;
    string getPassword() const;
    bool isEqual(const User &user) const;
};
#endif