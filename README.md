# Library Management System

## 📌 Introduction
The **Library Management System** is a **C++** project using **OOP** principles designed to efficiently manage books and users in a library.

## ⚙️ Core Features
- **Add, delete, and update users.**
- **Add, delete, and update books (printed books and e-books).**
- **Display the list of registered books and users.**

## 📁 Project Structure
```
📂 LibrarySystem
 ┣ 📜 main.cpp
 ┣ 📜 Book.h
 ┣ 📜 Book.cpp
 ┣ 📜 User.h
 ┣ 📜 User.cpp
 ┣ 📜 EBook.h
 ┣ 📜 EBook.cpp
 ┣ 📜 PrintedBook.h
 ┣ 📜 PrintedBook.cpp
 ┣ 📜 Library.h
 ┣ 📜 Library.cpp
 ┣ 📜 README.md
```

## 🚀 How to Run
### 1️⃣ Prerequisites
- A **C++ compiler** (such as `g++`).
- A code editor like **CodeBlocks** or **VS Code**.

### 2️⃣ Compilation & Execution
1. **Compile the files:**
   ```sh
   g++ main.cpp Book.cpp User.cpp EBook.cpp PrintedBook.cpp Library.cpp -o library_system
   ```
2. **Run the program:**
   ```sh
   ./library_system
   ```

## 📜 Usage Example
### **Adding Users and Books & Displaying Data**
```cpp
Library myLibrary("Central Library");

// Adding users
myLibrary.addUser(User("Salah", "salah@example.com", "securepass"));
myLibrary.addUser(User("Rania", "rania@example.com", "123456"));

// Adding books
Book* book1 = new PrintedBook("C++ Primer", "Lippman", "123456", 35.5, 970);
Book* book2 = new EBook("Effective C++", "Scott Meyers", "789101", 20.0, 5.2, "PDF");
myLibrary.addBook(book1);
myLibrary.addBook(book2);

// Displaying data
myLibrary.displayUsers();
myLibrary.displayBooks();

// Memory cleanup
delete book1;
delete book2;
```

## 📌 Future Enhancements
- Implement **a book borrowing system**.
- Add **a graphical user interface (GUI)**.
- Support **data storage in a database or JSON file**.
