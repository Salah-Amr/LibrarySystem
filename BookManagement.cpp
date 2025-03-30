#include "BookManagement.h"
BookManagement::BookManagement(vector<Book*> books) : books(books), maximumBooksSize((int)books.size()) {}
BookManagement::BookManagement() {
    books = {};
    maximumBooksSize = 0;
}
BookManagement::~BookManagement() {
    for (Book* book : books) {
        delete book;
    }
    books.clear();
}
void BookManagement::addBook(const Book& book) {
    Book* newBook = new Book(book);
    if (!newBook) {
        std::cerr << "Failed to allocate memory for new book!\n";
        return;
    }
    books.emplace_back(newBook);
    maximumBooksSize = (int)books.size();
    cout << "book added successfully\n";
}
void BookManagement::deleteBook(const Book& targetBook) {
    for (size_t i = 0; i < books.size(); ++i) {
        if (books[i]->isEqual(targetBook)) {
            delete books[i];
            books.erase(books.begin() + i);
            cout << "Book " << targetBook.getName() << " deleted successfully";
            return;
        }
    }
    cout << "Book " << targetBook.getName() << " not found";
}
void BookManagement::updateBook(const Book& oldBook, const Book& newBook) {
    for (Book* b : books) {
        if (b->isEqual(oldBook)) {
            *b = newBook;
            cout << "book updated successfully\n";
            return;
        }
    }
    cout << "book not found\n";
}
vector<Book*> BookManagement::getBooks() const {
    return books;
}
int BookManagement::getMaximumBooksSize() const { return maximumBooksSize; }