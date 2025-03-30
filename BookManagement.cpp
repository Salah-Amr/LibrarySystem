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
void BookManagement::addBook(Book* newBook) {
    books.emplace_back(*newBook);
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
        for (int i = index; i < maximumBooksSize - 1; i++) {
            books[i] = books[i + 1];
        }
        books.pop_back();
        maximumBooksSize--;
        cout << "book deleted successfully\n";
    }
}
void BookManagement::updateBook(const Book& oldBook, const Book& book) {
    int index = -1;
    for (int i = 0; i < maximumBooksSize; i++) {
        if (books[i].isEqual(oldBook)) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "book not found\n";
    }
    else {
        books[index] = book;
        cout << "book updated successfully\n";
    }
}
vector <Book> BookManagement::getBooks() const { return books; }
int BookManagement::getMaximumBoosSize() const { return maximumBooksSize; }