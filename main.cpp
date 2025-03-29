#include "Library.cpp"
#include "Book.cpp"
#include "User.cpp"
#include "PrintedBook.cpp"
#include "EBook.cpp"

int main() {
    Library myLibrary("Central Library");
    User user1("Ali", "ali@example.com", "pass123");
    User user2("Sara", "sara@example.com", "sara456");
    myLibrary.addUser(user1);
    myLibrary.addUser(user2);

    Book* book1 = new PrintedBook("C++ Primer", "Lippman", "123456", 35.5, 970);
    Book* book2 = new EBook("Effective C++", "Scott Meyers", "789101", 20.0, 5.2, "PDF");
    Book* book3 = new PrintedBook("Design Patterns", "GoF", "112233", 40.0, 395);
    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3);

    myLibrary.displayUsers();
    myLibrary.displayBooks();
    myLibrary.displayInfo();
    return 0;
}
