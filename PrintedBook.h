#ifndef CPP_PRINTEDBOOK_H
#define CPP_PRINTEDBOOK_H
#pragma once
#include "Book.h"

class PrintedBook : public Book {
private:
    int numOfPages;
public:
    PrintedBook(const string& title, const string& author, const string& ISBN, double price, int pages);
    void displayInfo() const override;
};
#endif //CPP_PRINTEDBOOK_H
