# Student Record Management System (C++)

A file-based Student Record Management System built using C++ with binary file handling.

This console-based application demonstrates how persistent data storage can be implemented without relying on an external database by leveraging low-level binary file operations.

---

## 📌 Project Overview

This system allows users to manage student records efficiently using structured binary file storage.  
All records are stored in a binary file (`students.dat`) to ensure persistence even after program termination.

The application supports complete CRUD operations (Create, Read, Update, Delete) with duplicate ID validation and modular project structure.

---

## 🚀 Features

- Add student record
- Display all student records in tabular format
- Search student by unique ID
- Update existing student record
- Delete student record
- Duplicate ID validation before insertion
- Persistent storage using binary files
- Modular separation of header and source files

---

## 🧠 Concepts Implemented

- Object-Oriented Programming (OOP)
- Class encapsulation
- Binary file handling (`fstream`)
- Fixed-size record storage
- File read/write operations
- Record modification using temporary file rewriting
- Duplicate validation logic
- Modular programming with header/source separation
- Data formatting using `iomanip`

---

## 🗂 Project Structure

```
Student_Record_Management_System/
│
├── include/
│     └── Student.h
│
├── src/
│     ├── Student.cpp
│     └── main.cpp
│
├── .gitignore
└── README.md
```

---

## ⚙️ How It Works

- Each student record contains:
  - ID
  - Name
  - Department
  - CGPA
- Records are stored in binary format for structured and efficient access.
- Update and delete operations are performed by rewriting data into a temporary file and replacing the original file.
- Duplicate student IDs are prevented during insertion.

---

## 🛠 How to Compile

Since the project uses separate folders for headers and source files:

```
g++ src/main.cpp src/Student.cpp -I include -o student_system
```

Run the program:

```
./student_system
```

(Windows users: run `student_system.exe`)

---

## 📂 Why Binary File?

Binary file storage ensures:

- Fixed-size records
- Faster read/write operations
- No parsing overhead like text files
- Structured and reliable persistent storage

---

## 🎯 Learning Outcome

Through this project, I strengthened my understanding of:

- Persistent storage without databases
- Low-level file handling in C++
- Record manipulation using temporary file replacement
- Separation of declaration (`.h`) and implementation (`.cpp`)
- Clean modular project organization

---

## 📈 Future Improvements

- Sorting records by CGPA or ID
- Displaying top performer
- Statistics (average CGPA, total students)
- Role-based login system
- Enhanced input validation
- Exception handling
- Integration with a database system

---

## 📎 Note

This project focuses on foundational system design principles and file-based persistence, serving as a stepping stone toward database-driven application development.
