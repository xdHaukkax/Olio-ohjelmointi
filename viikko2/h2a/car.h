#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;

public:
    void setBrand(string b);
    void setModel(string m);
    void setYearModel(int y);

    void printData();
};

#endif