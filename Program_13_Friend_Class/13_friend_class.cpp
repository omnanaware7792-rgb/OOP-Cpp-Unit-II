// Unit II - Object-Oriented Programming with C++
// Source: Unit 2 Inheritance Practical Code Book

#include <iostream>

class Account {
private:
    double balance;
    friend class Auditor;

public:
    explicit Account(double initialBalance) : balance(initialBalance) {}
};

class Auditor {
public:
    void inspect(const Account& account) const {
        std::cout << "Account Balance: " << account.balance << '\n';
    }
};

int main() {
    Account account(5000.0);
    Auditor auditor;
    auditor.inspect(account);
    return 0;
}
