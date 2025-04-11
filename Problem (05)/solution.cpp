// exercise 5...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
/*

question....?

write an opp complete program to represent teacher class definr two data members(المتغيرات) ,
then define an engineer class with two data members use a friend function 
to add 1000$ on the salaries of a teacher named ali and engineer named ahmed ,
///!  just ali and ahmed   

*/

class Engineer ;

class Teacher 
{
    private :
        string name ;
        int salary ;
    public :
    Teacher()
    {
        cout << "enter your name : " ;
        cin >> name ;
        cout << "enter your salary : " ;
        cin >> salary ;
    }
    friend void add(Teacher ob1 , Engineer ob2 ) ;      // friend function inside the class 

} ;

class Engineer 
{
    private :
        string name ;
        int salary ;
    public :
    Engineer()
    {
        cout << "enter your name : " ;
        cin >> name ;
        cout << "enter your salary : " ;
        cin >> salary ;
    }
    friend void add(Teacher ob1 , Engineer ob2 ) ;    // friend function inside the class 
    
} ;

// friend function outside the class 
void add(Teacher ob1 , Engineer ob2 )
{
    if (ob1.name == "ali")
    {
        cout <<"the new salary of teacher : " << ob1.name << endl ;
        ob1.salary+=1000 ;          // ob1.salary = ob1.salary + 1000 ;
        cout <<"the new salary is : " << ob1.salary << endl;
    }


    if (ob2.name == "ahmed")
    {
        cout <<"the new salary of teacher : " << ob2.name << endl ;
        ob2.salary+=1000 ;          // ob2.salary = ob2.salary + 1000 ;
        cout <<"the new salary is : " << ob2.salary << endl;
    }
}



int main ()
{      
    
    Teacher ob1 ;
    Engineer ob2 ;
    add(ob1 , ob2) ;

    return 0 ;
}