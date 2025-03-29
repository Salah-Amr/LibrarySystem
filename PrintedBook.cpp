#include "PrintedBook.h"
PrintedBook::PrintedBook(string title, string author, string ISBN, double price, int pages)
            : Book(title, author, ISBN, price), numOfPages(pages) {}
void PrintedBook::displayInfo() const {
    Book::displayInfo();
    cout << "Pages: " << numOfPages << "\nType: Printed Book\n";
    cout << "-----------------------------------------------------\n";
}