// Exercise-9 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;
/*

question.....?

Write a C++ program to represent 20 students , 
the class constructor will set values to all data members for each student 
then calculate the average for all student using friend function 

*/
const int size = 3 ;          // static int size = 3 ;         
class Student 
{
    private :
        float mark ;
    public :   
    Student()
    {
        cout << "enter your mark : " ;
        cin >> mark ;
    }
    friend void average(Student ob[size]) ;         // friend function 
    
} ;

void average(Student ob[size])
{
    float sum = 0 ;
    for(int i = 0 ; i < size;i++)
    {
        sum+= ob[i].mark ;
    }

    cout << "the average of all students : " << sum/size << endl;
}


int main ()
{
    Student ob[size] ;
    average(ob) ;
  
    return 0 ;
}