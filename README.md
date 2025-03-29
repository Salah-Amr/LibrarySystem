# Library Management System

## 📌 مقدمة
مشروع **نظام إدارة المكتبة** مكتوب بلغة **C++** باستخدام **OOP** ويهدف إلى إدارة الكتب والمستخدمين في مكتبة بطريقة منظمة وفعالة.

## ⚙️ الوظائف الأساسية
- **إضافة وحذف وتحديث المستخدمين.**
- **إضافة وحذف وتحديث الكتب (الكتب المطبوعة والكتب الإلكترونية).**
- **عرض قائمة الكتب والمستخدمين المسجلين.**

## 📁 هيكلة المشروع
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

## 🚀 كيفية التشغيل
### 1️⃣ المتطلبات الأساسية
- يجب أن يكون لديك **C++ Compiler** (مثل `g++`).
- استخدم **CodeBlocks** أو **VS Code** أو أي محرر يدعم C++.

### 2️⃣ خطوات التشغيل
1. **ترجمة الملفات:**
   ```sh
   g++ main.cpp Book.cpp User.cpp EBook.cpp PrintedBook.cpp Library.cpp -o library_system
   ```
2. **تشغيل البرنامج:**
   ```sh
   ./library_system
   ```

## 📜 مثال على الاستخدام
### **إضافة المستخدمين والكتب وعرض البيانات**
```cpp
Library myLibrary("Central Library");

// إضافة مستخدمين
myLibrary.addUser(User("Salah", "salah@example.com", "securepass"));
myLibrary.addUser(User("Rania", "rania@example.com", "123456"));

// إضافة كتب
Book* book1 = new PrintedBook("C++ Primer", "Lippman", "123456", 35.5, 970);
Book* book2 = new EBook("Effective C++", "Scott Meyers", "789101", 20.0, 5.2, "PDF");
myLibrary.addBook(book1);
myLibrary.addBook(book2);

// عرض البيانات
myLibrary.displayUsers();
myLibrary.displayBooks();

// تنظيف الذاكرة
delete book1;
delete book2;
```

## 📌 الميزات المستقبلية
- إضافة **نظام استعارة الكتب**.
- دعم **واجهة رسومية GUI**.
- حفظ واسترجاع البيانات من **قاعدة بيانات أو ملف JSON**.
