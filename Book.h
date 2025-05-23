#ifndef CPP_BOOK_H
#pragma once
#define CPP_BOOK_H
#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    string ISBN;
    double price;
public:
    Book(string name, string author, string ISBN, double price);
    Book();
    virtual ~Book() = default;
    virtual void displayInfo() const;
    string getName() const;
    string getAuthor() const;
    string getISBN() const;
    double getPrice() const;
    bool isEqual(const Book& book) const;
};
#endif