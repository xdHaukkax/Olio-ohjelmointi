#include "student.h"

void Student::setName(string n)
{
    name = n;
}

void Student::setStudentNumber(int number)
{
    studentNumber = number;
}

void Student::setAverage(double avg)
{
    average = avg;
}

string Student::getName()
{
    return name;
}

int Student::getStudentNumber()
{
    return studentNumber;
}

double Student::getAverage()
{
    return average;
}