#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <iomanip>

using namespace std;

class Student {
private:
    int id;
    char name[50];
    char department[30];
    float cgpa;

public:
    void input();
    void display() const;
    int getId() const;
};

#endif
