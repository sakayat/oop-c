#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    string model;
    int year;

public:
    Vehicle(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl 
             << "Model: " << model << endl 
             << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int numDoors;

public:
    Car(string brand, string model, int year, int numDoors)
        : Vehicle(brand, model, year) {
        this->numDoors = numDoors;
    }

    void displayCarInfo() {
        displayInfo();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class ElectricCar : public Car {
protected:
    int batteryCapacity;

public:
    ElectricCar(string brand, string model, int year, int numDoors, int batteryCapacity)
        : Car(brand, model, year, numDoors) {
          this->batteryCapacity = batteryCapacity;
        }

    void displayElectricCarInfo() {
        displayCarInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar ec("Tesla", "S", 2022, 4, 100);
    ec.displayElectricCarInfo();

    return 0;
}