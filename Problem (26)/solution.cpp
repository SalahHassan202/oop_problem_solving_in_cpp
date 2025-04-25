// Exercise-26 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks.
Include member functions to calculate the grade based on the marks and display the student's information.

*/


class Student
{

    private :
        string name = " " ;
        string studentClass = "";
        int rollNumber = 0 ;
        double mark = 0.0  ;

    public : 
        Student()
        {
            cout << "Enter Your Name : " << endl;
            cin >> name ;

            cout << "Enter Your StudentClass : " << endl;
            cin >> studentClass ;

            cout << "Enter Your RollNumber : " << endl;
            cin >> rollNumber ;

            cout << "Enter Your Mark : " << endl;
            cin >> mark ;
        }
        string calculateGrade()
        {
            if(mark >= 90)
            {
                return "A+" ;
            }
            else if(mark >= 80)
            {
                return "A" ;
            }
            else if(mark >= 70)
            {
                return "B" ;
            }
            else if(mark >= 60)
            {
                return "c" ;
            }
            else
            {
                return "D" ;
            }
        }
        void displayInformation()
        {
            cout << "Your Name Is : " << name << endl;
            cout << "Your StudentClass Is : " << studentClass << endl;
            cout << "Your RollNumber Is : " << rollNumber << endl;
            cout << "Your Mark Is : " << mark << endl;
        }
        
} ;


int main ()
{

    Student stu ;
    stu.displayInformation() ;
    cout << stu.calculateGrade() << endl ;
     


    
    return 0 ;
}
