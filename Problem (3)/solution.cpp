// exercise 3...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;
/*

question....?

write an opp complete program to represent a car , the class constructor 
will set the values to all its data members (المتغيرات)
, then create a member function outside the class to display the car price 
, then create a friend function to increase the car price by 1000 

*/

class Car
{
    private :
        int price ;
        string name ;
        string colour ;
    public :
    Car(int p , string n , string c)
    {
        price = p ;
        name = n ;
        colour = c ;
    }
    void display () ;                           // member function 
    friend void increase(Car ob) ;            // friend function inside the class 

} ;

// friend function outside the class 
void increase(Car ob)
{
    cout << "the old price is " << ob.price << endl;
    ob.price+=1000 ;          // ob.price = ob.price + 1000 ;
    cout << "the new price is " << ob.price << endl;
}

void Car :: display()
{
    cout << "price of the car is " << price << endl; 
}


int main ()
{      
    Car ob1(5000 , "BMW" , "Black") ;
    ob1.display() ;
    cout << "*****************************" << endl;
    increase(ob1) ;

    return 0 ;
}