#ifndef CPP_EBOOK_H
#define CPP_EBOOK_H
#pragma once
#include "Book.h"
class EBook : public Book {
private:
    double fileSize;
    string format;
public:
    EBook(const string& title, const string& author, const string& ISBN, double price, double fileSize, const string& format);
    void displayInfo() const override;
};
#endif