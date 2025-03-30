#include <sstream>
#include "EBook.h"
EBook::EBook(const string& title, const string& author, const string& ISBN, double price, double fileSize, const string& format)
        : Book(title, author, ISBN, price), fileSize(fileSize), format(format) {};
EBook::EBook() {
    Book();
    fileSize = 0.0;
    format = "";
};
void EBook::displayInfo() const {
    Book::displayInfo();
    ostringstream output;
    output << "File Size: " << fileSize << "MB\n"
           << "Format: " << format << "\n"
           << "Type: E-Book\n"
           << "-----------------------------------------------------\n";
    cout << output.str();
}