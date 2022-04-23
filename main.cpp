#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Bank {
    public:
        string name;
        string address;
        char type;
        int phone_number;
        int account_number;
        double deposit, withdraw, balance;
        void create_account();
        void deposit_money();
        void withdraw_money();
        void balance_enquiry();
        void account_detail();

};

double deposit, withdraw, balance = 0;

void Bank :: create_account(){

    cout << "Enter your full name: " << endl;
    cin.ignore();
    getline(cin, name);
    cout << "Enter your address: " << endl;
    getline(cin, address);
    cout << "Enter your phone number: ";
    cin >> phone_number;
    cout << "Please choose which type of account you want to open\nCurrent(C) or Savings(S): " << endl;
    cin >> type;
    cout << "Please enter the amount of money you want to deposit: " << endl;
    cin >> balance;
    int minimum = 11111111;
    int maximum = 99999999;
    srand(time(NULL));
    account_number = rand()%(maximum - minimum +1) + minimum; // randomly generating an account number
    cout << "Your account has been created! Your account number is " << account_number << endl;



}

void Bank :: deposit_money(){
    cout << "Please enter the amount you want to deposit: " << endl;
    cin >> deposit;
    balance += deposit;
    cout << "Deposit successful! Your account currently has $" << balance << endl;

}

void Bank :: withdraw_money(){
    cout << "Please enter the amount you want to withdraw: " << endl;
    cin >> withdraw;
    balance -= withdraw;
    cout << "Withdrawal successful! Your account current has $" << balance << endl;

}

void Bank :: balance_enquiry(){
    cout << "Your account currently has $" << balance << endl;

}

void Bank :: account_detail(){
    cout << "Your name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Phone number: " << phone_number << endl;
    cout << "Account type: " << type << endl;
    cout << "Account number: " << account_number << endl;
    cout << "Balance: " << balance << endl;

}

int main()
{
    Bank b;
    char option;
    int choice;
    do{
        cout << "\t\t\t\t\tBank Management System" << endl;
        cout << "\nPlease choose from the options below: " << endl;
        cout << "1. Create an account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Check balance of account" << endl;
        cout << "5. View account details" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;

        if (choice == 1){
            b.create_account();

        }
        if (choice == 2){
            b.deposit_money();

        }
        if (choice == 3){
            b.withdraw_money();

        }
        if (choice == 4){
            b.balance_enquiry();

        }
        if (choice == 5){
            b.account_detail();

        }
        if (choice == 6){
            exit(0);
        }
        cout << "Do you want to continue banking? Press 'Y' for yes or 'N' for no: " << endl;
        cin >> option;


        if (option == 'N' || option == 'n'){
            exit(0);
        }
        }



    while (option == 'Y' || option == 'y');
        return 0;

}
