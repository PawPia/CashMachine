#include <iostream>
#include "Cash_Machine.h"
using namespace std;

machine::machine() : balance(0){}

void machine::checkBalance() {
    cout <<"Your balance is: "<< balance << "PLN" <<endl;
}

void machine::deposit(double cash) {
    if (cash <= 0){
        cout<<"The amount must be higher than 0"<<endl;
        return;
    }
    balance += cash;
    cout<<cash<<" PLN was deposited to your account"<<endl;
}

void machine::withdraw(double cash){
    if (cash <= 0){
        cout<<"The amount must be higher than 0"<<endl;
        return;
    }
    if(cash > balance) {
        cout <<"Not enough funds in your account"<<endl;
        return;
    }
    balance -= cash;
    cout <<cash<< " PLN has been withdrawn from your account"<<endl;
}