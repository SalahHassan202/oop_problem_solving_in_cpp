// exercise 4...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
/*

question....?

write an opp complete program to represent 3 workers , 
the class constructor will set values of salery and name for each worker ,
then calculate the average of salaries for all workers using friend function 


*/

class Workers
{
    private :
        string name ;
        int salary;
    public :
    Workers()
    {
        cout << "enter your name : " ;
        cin >> name ;
        cout << "enter your salary : " ;
        cin >> salary ;
    }
    friend void average(Workers ob1 , Workers ob2 , Workers ob3) ;      // friend function inside class
} ;

// friend function outside class
void average(Workers ob1 , Workers ob2 , Workers ob3) 
{
    int avg = (ob1.salary + ob2.salary + ob3.salary) / 3 ;
    cout << "the average of saleries for all workers " << avg << endl; 
}



int main ()
{      
    Workers ob1 ;
    Workers ob2 ;
    Workers ob3 ;

    average(ob1 , ob2 , ob3) ;

    return 0 ;
}