
#include <iostream>
#include <string>
using namespace std;

// Engine-luokka
class Engine {
private:
    int horsepower;
    double displacement;

public:
    Engine() {
        horsepower = 0;
        displacement = 0.0;
    }

    void setHorsepower(int value) {
        horsepower = value;
    }

    int getHorsepower() {
        return horsepower;
    }

    void setDisplacement(double value) {
        displacement = value;
    }

    double getDisplacement() {
        return displacement;
    }
};

// Wheel-luokka
class Wheel {
private:
    int size;
    string type;

public:
    Wheel() {
        size = 0;
        type = "";
    }

    void setSize(int value) {
        size = value;
    }

    int getSize() {
        return size;
    }

    void setType(string value) {
        type = value;
    }

    string getType() {
        return type;
    }
};

// Car-luokka
class Car {
private:
    Engine engine;
    Wheel wheels[4];
    string model;
    string brand;

public:
    Car() {
        model = "";
        brand = "";
    }

    void setModel(string value) {
        model = value;
    }

    string getModel() {
        return model;
    }

    void setBrand(string value) {
        brand = value;
    }

    string getBrand() {
        return brand;
    }

    void setEngine() {
        engine.setHorsepower(150);
        engine.setDisplacement(2.0);
    }

    void setWheels() {
        for (int i = 0; i < 4; i++) {
            wheels[i].setSize(17);
            wheels[i].setType("kesarengas");
        }
    }

    void printDetails() {
        cout << "Auto : " << model << " " << brand << endl;

        cout << "Moottori: "
             << engine.getHorsepower() << " hp, "
             << engine.getDisplacement() << " L" << endl;

        for (int i = 0; i < 4; i++) {
            cout << "Rengas " << i + 1 << ":"
                 << wheels[i].getSize() << " tuumaa, "
                 << wheels[i].getType() << endl;
        }
    }
};

// Pääohjelma
int main() {
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");

    car.setEngine();
    car.setWheels();

    car.printDetails();

    return 0;
}
