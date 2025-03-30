#include "BookManagement.h"
BookManagement::BookManagement(vector <Book> books) : books(books), maximumBooksSize((int)books.size()) {}
BookManagement::BookManagement() {
    books = {};
    maximumBooksSize = 0;
}
void BookManagement::addBook(const Book& newBook) {
    books.emplace_back(newBook);
    maximumBooksSize = (int)books.size();
    cout << "book added successfully\n";
}
void BookManagement::deleteBook(const Book& targetBook) {
    int index = -1;
    for (int i = 0; i < maximumBooksSize; i++) {
        if (books[i].isEqual(targetBook)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "book not found\n";
    }
    else {
        books.erase(books.begin() + index);
        maximumBooksSize = (int)books.size();
        cout << "book deleted successfully\n";
    }
}
void BookManagement::updateBook(const Book& oldBook, const Book& book) {
    for (Book& b : books) {
        if (b.getISBN() == oldBook.getISBN()) {
            b = book;
            cout << "book updated successfully\n";
            return;
        }
    }
    cout << "book not found\n";
}
const vector<Book>& BookManagement::getBooks() const { return books; }
int BookManagement::getMaximumBooksSize() const { return maximumBooksSize; }