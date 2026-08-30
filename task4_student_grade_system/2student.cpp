#include "1student.h"


Student::Student(int i, string n, float m)
{
    id = i;
    name = n;
    marks = m;
}

void Student::display()
{
    cout << "Student ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}


int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

float Student::getMarks()
{
    return marks;
}