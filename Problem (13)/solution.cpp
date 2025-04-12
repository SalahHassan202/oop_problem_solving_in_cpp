// Exercise-13 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*
create an app (by using OPP)
that accept id , name , age of Employee
and print them
*/

class Employee 
{
    public:
        int id ;
        string name;
        int age ;
    
} ;


int main ()
{
    Employee e ;
    cout << "Please Enter Your id : " << endl;
    cin >> e.id ;
    cout << "*******************************" << endl;
    cout << "Please Enter Your name : " << endl;
    cin >> e.name ;
    cout << "*******************************" << endl;
    cout << "Please Enter Your age : " << endl;
    cin >> e.age ;
    cout << "*******************************" << endl;

    cout << e.id << " - " << e.name << " - " << e.age << endl;

    
    return 0 ;
}
