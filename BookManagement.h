#ifndef CPP_BOOKMANAGEMENT_H
#define CPP_BOOKMANAGEMENT_H
#include "Book.h"
#include <vector>
class BookManagement {
private:
    int maximumBooksSize;
    vector <Book> books;
public:
    BookManagement();
    BookManagement(vector <Book> books);
    void addBook(const Book& newBook);
    void addBook(Book* newBook);
    void deleteBook(const Book& targetBook);
    void updateBook(const Book& oldBook, const Book& book);
    vector <Book> getBooks() const;
    int getMaximumBoosSize() const;
};
#endif //CPP_BOOKMANAGEMENT_H
