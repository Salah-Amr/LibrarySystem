#include "EBook.h"
EBook::EBook(string title, string author, string ISBN, double price, double fileSize, string format)
: Book(title, author, ISBN, price), fileSize(fileSize), format(format) {}
void EBook::displayInfo() const {
    Book::displayInfo();
    cout << "File Size: " << fileSize << "MB\nFormat: " << format
    << "\nType: E-Book\n\n";
    cout << "-----------------------------------------------------\n";
}