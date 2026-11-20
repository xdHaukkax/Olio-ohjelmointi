#include "car.h"
#include <iostream>

Car::Car(string b, string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << yearModel << endl;
}