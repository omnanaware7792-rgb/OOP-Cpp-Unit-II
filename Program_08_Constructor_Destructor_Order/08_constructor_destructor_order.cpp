// Unit II - Object-Oriented Programming with C++
// Source: Unit 2 Inheritance Practical Code Book

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }

    ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }

    ~Derived() {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    Derived object;
    return 0;
}
