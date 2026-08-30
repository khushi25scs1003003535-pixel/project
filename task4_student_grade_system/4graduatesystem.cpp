#include "3graduatestudent.h"

// Constructor
GraduateStudent::GraduateStudent(int i, string n, float m, string s)
    : Student(i, n, m)
{
    specialization = s;
}

// Display graduate student details
void GraduateStudent::display()
{
    Student::display();   // Base class ka display function call
    cout << "Specialization : " << specialization << endl;
}

