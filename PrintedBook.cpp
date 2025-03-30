#include "PrintedBook.h"
#include <sstream>
PrintedBook::PrintedBook(const string& title, const string& author, const string& ISBN, double price, int pages)
        : Book(title, author, ISBN, price), numOfPages(pages) {};
void PrintedBook::displayInfo() const {
    Book::displayInfo();
    ostringstream output;
    output << "Type: E-Book\n"
           << "-----------------------------------------------------\n";
    cout << output.str();
}