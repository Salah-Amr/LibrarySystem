#ifndef CPP_EBOOK_H
#define CPP_EBOOK_H
#include "Book.h"
class EBook : public Book {
private:
    double fileSize;
    string format;
public:
    EBook(string title, string author, string ISBN, double price, double fileSize, string format);
    void displayInfo() const override;
};
#endif