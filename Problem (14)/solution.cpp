// Exercise-14 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

Create an OPP program that accept name , number of employee and print them 
look!!!
make sure that name size > 5 ;
make sure that number size > 0 ;

*/

class Employee
{
    private :
        string name ;
        string number ;

    public :
        Employee()
        {
            // name
            cout << "Enter Your Name : " <<endl;
            cin >> name ;
            if(name.size() <= 5)
            {
                cout << "Invalid Name !!! " << endl;
                
            }
            // number
            cout << "Enter Your Number : " <<endl;
            cin >> number ;
            if(number.size() < 0)
            {
                cout << "Invalid Number !!! " << endl;
                
            }
        }
        void print()
        {
            if(number.size() > 0 && name.size() >5)
            {
                cout << "Name is : " << name << endl ;
                cout << "Number is : " << number << endl; 
            }
            else
            {
                
            }
        }
} ;



int main ()
{
    Employee e ;
    e.print() ;
    
    return 0 ;
}
