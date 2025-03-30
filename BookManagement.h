#ifndef CPP_BOOKMANAGEMENT_H
#define CPP_BOOKMANAGEMENT_H
#pragma once
#include "Book.h"
#include <vector>
class BookManagement {
private:
    int maximumBooksSize;
    vector<Book*> books;
public:
    BookManagement();
    ~BookManagement();
    BookManagement(vector <Book*> books);
    void addBook(const Book& book);
    void deleteBook(const Book& targetBook);
    void updateBook(const Book& oldBook, const Book& book);
    vector<Book*> getBooks() const;
    int getMaximumBooksSize() const;
};
#endif //CPP_BOOKMANAGEMENT_H
