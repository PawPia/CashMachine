#pragma once
#include <string>

class machine {
private:
    double balance;
public:
    machine();

    void checkBalance() const;
    void deposit() const;
    void withdraw() const;

};