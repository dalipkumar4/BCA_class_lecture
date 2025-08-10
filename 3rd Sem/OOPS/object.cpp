#include <iostream>
#include <string>
using namespace std;

class Car { 
public:    
    string brand;
    int year;

    void displayDetails() { 
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar; // Create an object named 'myCar' of the 'Car' class

    myCar.brand = "Toyota";
    myCar.year = 2024;
    myCar.displayDetails();
    Car anotherCar;
    anotherCar.brand = "Ford";
    anotherCar.year = 2020;
    anotherCar.displayDetails();

    return 0;
}
