#include <sstream>
#include "Book.h"

Book::Book(string name, string author, string ISBN, double price)
        : title(name), author(author), ISBN(ISBN), price(price) {}
Book::Book() {
    title = author = ISBN = "";
}
void Book::displayInfo() const {
    ostringstream output;
    output << "Name: " << title << '\n'
    << "Author: " << author << '\n'
    << "ISBN: " << ISBN << '\n'
    << "Price: " << price << '\n'
    << "-----------------------------------------------------\n";
    cout << output.str();
}
string Book::getName() const { return title; }
string Book::getISBN() const { return ISBN; }
double Book::getPrice() const { return price; }
string Book::getAuthor() const { return author; }
bool Book::isEqual(const Book& book) const {
    return (title == book.title && author == book.author &&
            ISBN == book.ISBN && price == book.price);
}