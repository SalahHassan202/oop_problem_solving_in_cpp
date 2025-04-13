// Exercise-15 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

Create an OPP program that accept 3 number and return sum of them
look!!!
make sure that 3 number must be even number

*/

class Sum
{
    
    public :
        int num1 = 0  ;
        int num2 = 0  ;
        int num3 = 0  ;

        void print()
        {
            if(num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0 )              // even numbers
            {
                cout << "The Sum Of All 3 Numbers Is : " << (num1+num2+num3 )<< endl;
            }
            else
            {
                cout << "Invalid Numbers ... You Should Resure the All NUmbers Are even!!" << endl ;
            }
        }
} ;



int main ()
{
    Sum ob1 ;
    cout << "Enter Your num1 : " <<endl;
    cin >> ob1.num1 ;
    cout << "Enter Your num2 : " <<endl;
    cin >> ob1.num2 ;
    cout << "Enter Your num3 : " <<endl;
    cin >> ob1.num3 ;
    ob1.print() ;
    
    return 0 ;
}
