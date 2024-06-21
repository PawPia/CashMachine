#include <iostream>
#include "Cash_Machine.h"
using namespace std;

void menu() {
    cout<<"Select an option\n"<<endl;
    cout<<"1. Check your balance"<<endl;
    cout<<"2. Deposit cash"<<endl;
    cout<<"3. Payout cash"<<endl;
    cout<<"0. Sign out\n"<<endl;
    cout<<"Select an option:\n"<<endl;
}

int main() {
    machine machine;
    int option;
    double cash;
    cout<<"\nWelcome in Cash Mashine\n\n"<<endl;

    do {
        menu();
        cin >> option;

        switch (option) {
            case 1:
                machine.checkBalance();//Sprawdzanie stanu konta
                break;
            case 2:
                cout << "Enter amount to deposit :\n" << endl;//Określanie kwoty do oddania do bankomatu
                cin >> cash;
                machine.deposit(cash);
                break;
            case 3:
                cout << "Enter amount to withdraw :\n" << endl;//Określanie kwoty do wyciągnięcia z bankomatu
                cin >> cash;
                machine.withdraw(cash);
                break;
            default:
                cout << "Please choose the right option" << endl;
                break;
        }
    } while (option != 4);
    cout << "Thank you for using our services\n" << endl;
    return 0;
}