#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // Car object (stack memory)
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    cout << "--- Car ---" << endl;
    car.printData();


    // Rectangle object (heap memory)
    Rectangle* rectangle = new Rectangle;

    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);

    cout << "\n--- Rectangle ---" << endl;
    cout << "Area: " << rectangle->getArea() << endl;
    cout << "Circumference: " << rectangle->getCircum() << endl;

    delete rectangle;


    // Student object (smart pointer)
    unique_ptr<Student> student = make_unique<Student>();

    student->setName("Matti Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.5);

    cout << "\n--- Student ---" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}