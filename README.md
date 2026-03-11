# Student Record Management System (C++)

A file-based Student Record Management System built using C++ with binary file handling.

This console-based application demonstrates how persistent data storage can be implemented without using an external database by leveraging low-level binary file operations.

---

## 📌 Project Overview

This system allows users to manage student records efficiently using structured file storage.  
All data is stored in a binary file (`students.dat`) to ensure persistence even after program termination.

The application supports full CRUD operations (Create, Read, Update, Delete) with duplicate ID validation and structured modular design.

---

## 🚀 Features

- Add student record
- Display all student records in tabular format
- Search student by unique ID
- Update existing student record
- Delete student record
- Duplicate ID validation before insertion
- Persistent storage using binary files
- Modular separation of header and implementation files

---

## 🧠 Concepts Used

- Object-Oriented Programming (Class & Encapsulation)
- Binary File Handling (`fstream`)
- Fixed-size record storage
- File read/write operations
- Record modification using temporary file rewriting
- Duplicate validation logic
- Modular programming (.h and .cpp separation)
- Basic data formatting using `iomanip`

---

## 🗂 File Structure

```
Student-Record-System/
├── Student.h
├── Student.cpp
├── main.cpp
├── README.md
└── .gitignore
```

---

## ⚙️ How It Works

- Each student record contains:
  - ID
  - Name
  - Department
  - CGPA
- Records are stored in binary format for efficient access.
- Update and delete operations are performed by rewriting records into a temporary file and replacing the original file.
- Duplicate student IDs are prevented during insertion.

---

## 🛠 How to Compile

Using g++:

```
g++ main.cpp Student.cpp -o student_system
```

Run the program:

```
./student_system
```

(Windows users: run `student_system.exe`)

---

## 📂 Why Binary File?

Binary file storage ensures:

- Fixed-size records for consistent structure
- Faster read/write compared to formatted text parsing
- Efficient memory-level storage
- Structured and reliable persistent storage

---

## 🎯 Learning Outcome

Through this project, I strengthened my understanding of:

- Persistent storage without databases
- Data structuring using classes
- Record manipulation through temporary file replacement
- Separation of declaration and implementation
- Structured modular project design
- Practical file handling concepts in C++

---

## 📈 Future Improvements

- Sorting records (by CGPA or ID)
- Displaying top performer
- Statistics (average CGPA, total students)
- Role-based login system
- Enhanced input validation
- Exception handling
- Transition to database-backed system

---
## 📎 Note

This project focuses on foundational system design principles and low-level file persistence, serving as a stepping stone toward database-driven application development.
