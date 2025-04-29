// Exercise-30 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

question...?

write a program to Employee 
method to print final salary 
addSalary ==> if salary < 500 ;
addWork ===> if hours > 6 ;


*/


class Employee
{

    private :
        double salary , hours ;
    public : 
        Employee()
        {
            cout << "Enter Your Salary : " << endl;
            cin >> salary ;

            cout << "Enter Hours : " << endl;
            cin >> hours ;
        }
       /*  void getInformation(double salary , double hours)
        {
            this->salary = salary ;
            this->hours = hours ;
        } */

        void addSalary()
        {
            if(salary < 500)
            {
                salary+=10 ;        // salary = salary + 10 ; 
                cout << "Final Salary Is : " << salary << endl;
            }
        }

        void addWork()
        {
            if(hours > 6)
            {
                salary+= 5 ;         // salary = salary + 5 ; 
                cout << "Final Salary Is : " << salary << endl;
            }
        }

        // getter
        double getSalary()
        {
            return salary ;
        }
} ;


int main ()
{
    Employee emp ;
    emp.addSalary() ;
    emp.addWork()  ;
    



    
    return 0 ;
}
