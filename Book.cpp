#include "Book.h"

Book::Book(string name, string author, string ISBN, double price)
        : title(name), author(author), ISBN(ISBN), price(price) {}
Book::Book() {
    title = author = ISBN = "";
}
Book::~Book() {
    cout << "book \"" << title << "\" deleted successfully\n";
}
void Book::displayInfo() const {
    cout << "Name: " << title << '\n';
    cout << "Author: " << author << '\n';
    cout << "ISBN: " << ISBN << '\n';
    cout << "Price: " << price << '\n';
}
string Book::getName() const { return title; }
string Book::getISBN() const { return ISBN; }
double Book::getPrice() const { return price; }
string Book::getAuthor() const { return author; }
bool Book::isEqual(const Book& book) const {
    return (title == book.title && author == book.author &&
            ISBN == book.ISBN && price == book.price);
}