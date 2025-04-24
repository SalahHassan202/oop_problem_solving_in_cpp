// Exercise-23 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance.
Include member functions to deposit and withdraw money from the account.

*/

class BankAccount
{

    private :
        string accountNumber ;
        double balance ;

    public : 
        BankAccount()
        {
            cout << "enter your accountNumber :: " << endl;
            cin >> accountNumber ;

            cout << "enter your balance :: " << endl;
            cin >> balance ;
        }
       void deposit(double amount)
       {
            balance += amount ; 
            cout << "Deposit successful. Current balance: " << balance << endl;
       }

       void withdraw(double amount)
       {
            if (amount <= balance)
            { 
                balance -= amount; 
                cout << "Withdrawal successful. Current balance: " << balance << endl; 
            }
            else
            {
                cout << "Insufficient balance. Cannot withdraw." << endl; 
            }
        }


} ;


int main ()
{
    BankAccount bank ;
    bank.deposit(1000) ;
    bank.withdraw(500) ;

     


    
    return 0 ;
}
