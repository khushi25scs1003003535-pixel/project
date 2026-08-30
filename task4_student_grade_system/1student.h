#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int id;
    string name;
    float marks;

public:
    // Constructor
    Student(int i, string n, float m);

    // Functions
    void display();

    int getId();
    string getName();
    float getMarks();
};

#endif