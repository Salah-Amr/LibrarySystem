#ifndef CPP_PRINTEDBOOK_H
#define CPP_PRINTEDBOOK_H
#include "Book.h"

class PrintedBook : public Book {
private:
    int numOfPages;
public:
    PrintedBook(string title, string author, string ISBN, double price, int pages);
    void displayInfo() const override;
};
#endif //CPP_PRINTEDBOOK_H
