#include <iostream>
#include <fstream>
#include "Student.h"

using namespace std;

const char FILE_NAME[] = "students.dat";

bool isDuplicate(int id);
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        cout << "\n==== Student Record System ====\n";
        cout << "1. Add\n";
        cout << "2. Display All\n";
        cout << "3. Search\n";
        cout << "4. Update\n";
        cout << "5. Delete\n";
        cout << "6. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid option.\n";
        }

    } while (choice != 6);

    return 0;
}

bool isDuplicate(int id) {
    ifstream file(FILE_NAME, ios::binary);
    Student s;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.getId() == id)
            return true;
    }
    return false;
}

void addStudent() {
    Student s;
    s.input();

    if (isDuplicate(s.getId())) {
        cout << "Duplicate ID not allowed.\n";
        return;
    }

    ofstream file(FILE_NAME, ios::binary | ios::app);
    file.write((char*)&s, sizeof(s));

    cout << "Student added successfully.\n";
}

void displayStudents() {
    ifstream file(FILE_NAME, ios::binary);
    Student s;

    if (!file) {
        cout << "No records found.\n";
        return;
    }

    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(15) << "Dept"
         << setw(5)  << "CGPA" << endl;
    cout << "------------------------------------------------\n";

    while (file.read((char*)&s, sizeof(s)))
        s.display();
}

void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    ifstream file(FILE_NAME, ios::binary);
    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            cout << "Record Found:\n";
            s.display();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Record not found.\n";
}

void updateStudent() {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    ifstream file(FILE_NAME, ios::binary);
    ofstream temp("temp.dat", ios::binary);
    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            cout << "Enter new details:\n";
            s.input();
            found = true;
        }
        temp.write((char*)&s, sizeof(s));
    }

    file.close();
    temp.close();

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found)
        cout << "Record updated.\n";
    else
        cout << "Record not found.\n";
}

void deleteStudent() {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    ifstream file(FILE_NAME, ios::binary);
    ofstream temp("temp.dat", ios::binary);
    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.getId() == id) {
            found = true;
            continue;
        }
        temp.write((char*)&s, sizeof(s));
    }

    file.close();
    temp.close();

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found)
        cout << "Record deleted.\n";
    else
        cout << "Record not found.\n";
}
