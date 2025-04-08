// Exercise-8 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;
/*

question.....?

Write a C++ program to represent the student class , 
data members are name , age , grade , id 
the class constructor set the values to all it's data members 
then create another class to represent the university 
use member function of the second class to print the values of the first class 

*/

class Student 
{
    private :
        string name ;
        int age ;
        int grade ;
        int id ;
    public :
        Student()
        {
            cout << "enter your name : " ;
            cin >> name ;
            cout << "enter your age : " ;
            cin >> age ;
            cout << "enter your grade : " ;
            cin >> grade ;
            cout << "enter your id : " ;
            cin >> id ;
        }
        friend class University ;
} ;

class University
{
    public :
    void print(Student ob)
    {
        cout << "*****************************" <<endl;
        cout << "your name is : " << ob.name << endl;
        cout << "your age is : " << ob.age << endl;
        cout << "your grade is : " << ob.grade << endl;
        cout << "your id is : " << ob.id << endl;
    }
} ;


int main ()
{
    
   Student ob1 ;
   University ob2 ;
   ob2.print(ob1) ;

    return 0 ;
}