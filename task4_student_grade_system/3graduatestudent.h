#ifndef GRADUATESTUDENT_H
#define GRADUATESTUDENT_H

#include "1student.h"

class GraduateStudent : public Student
{
private:
    string specialization;

public:
    
    GraduateStudent(int i, string n, float m, string s);

    
    void display();
};

#endif