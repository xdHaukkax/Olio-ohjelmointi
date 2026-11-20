#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    // Create vector
    vector<Car> carList;

    // Add three cars
    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("BMW", "320", 2022));
    carList.push_back(Car("Volvo", "V60", 2021));

    // Print second car
    cout << "Second car:" << endl;
    carList[1].printData();

    // Print all cars
    cout << "\nAll cars:" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        cout << "\nCar " << i + 1 << ":" << endl;
        carList[i].printData();
    }

    return 0;
}