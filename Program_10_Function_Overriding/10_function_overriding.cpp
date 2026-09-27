// Unit II - Object-Oriented Programming with C++
// Source: Unit 2 Inheritance Practical Code Book

#include <iostream>

class Vehicle {
public:
    virtual void move() const {
        std::cout << "Vehicle is moving\n";
    }

    virtual ~Vehicle() = default;
};

class Car : public Vehicle {
public:
    void move() const override {
        std::cout << "Car moves on roads\n";
    }
};

class Boat : public Vehicle {
public:
    void move() const override {
        std::cout << "Boat moves on water\n";
    }
};

int main() {
    Car car;
    Boat boat;
    car.move();
    boat.move();
    return 0;
}
