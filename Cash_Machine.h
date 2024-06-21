#pragma once

class machine {
private:
    double balance;

public:
    machine();
    void checkBalance();
    void deposit(double cash);
    void withdraw(double cash);
};