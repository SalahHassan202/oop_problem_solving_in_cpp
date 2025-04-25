// Exercise-25 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary.
Include member functions to calculate and set salary based on employee performance.

*/


class Employee
{

    private :
        string name = " " ;
        int id = 0 ;
        double salary = 0  ;

    public : 
        Employee()
        {
            cout << "enter your name : " << endl;
            cin >> name ;
            cout << "enter your id : " << endl;
            cin >> id ;
            cout << "enter salary : " << endl;
            cin >> salary ;
        }
        double calculateSalary(double performanceRating)
        {
            if(performanceRating >= 0.0 && performanceRating <= 1.4)
            { 
                salary *= performanceRating;       // salary = salary * performanceRating ;
                cout << "salary is : " << salary << endl ;
            }
            else
            {
                cout << "Invalid performance rating. Salary remains unchanged." << endl; 
            }
        }
} ;


int main ()
{
    Employee em ;
    double performanceRating ;
    cout << "enter your performanceRating : " << endl;
    cin >> performanceRating ;
    em.calculateSalary(performanceRating);

     


    
    return 0 ;
}
