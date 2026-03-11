#include "Student.h"
#include <cstring>

void Student::input() {
    cout << "ID: ";
    cin >> id;

    cin.ignore();

    cout << "Name: ";
    cin.getline(name, 50);

    cout << "Department: ";
    cin.getline(department, 30);

    cout << "CGPA: ";
    cin >> cgpa;
}

void Student::display() const {
    cout << left << setw(10) << id
         << setw(20) << name
         << setw(15) << department
         << setw(5)  << cgpa << endl;
}

int Student::getId() const {
    return id;
}
