// Exercise-12 with Solution

/*
/// operator overloading...... (OPP)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;




/// first method 

class Cal 
{
   private :
        int x = 0 ;
        int y = 0 ;
    public :
    Cal()
    {
        cout <<"enter value of x : " ;
        cin >> x ;
        cout <<"enter value of y : " ;
        cin >> y ;
        
    }
    void minus(Cal ob1 , Cal ob2)
    {
        cout << ob1.x << " - " <<  ob2.y << " = " << ob1.x - ob2.y << endl;
    }
} ;




int main ()
{
    Cal ob1 ;
    Cal ob2 ;
    ob1.minus(ob1 , ob2) ;
  
    return 0 ;
}


*/


/*
/// second method 
/// operator overloading...... (OPP)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;


class Cal 
{
   private :
        int x = 0 ;
        int y = 0 ;
    public :
    Cal()
    {
        cout <<"enter value of x : " ;
        cin >> x ;
        cout <<"enter value of y : " ;
        cin >> y ;
        
    }
    void minus( Cal ob2)
    {
        cout << x << " - " <<  ob2.y << " = " << x - ob2.y << endl;
    }
} ;

int main ()
{
    Cal ob1 ;
    Cal ob2 ;
    ob1.minus( ob2) ;
  
    return 0 ;
}


*/

/// third method 
/// operator overloading...... (OPP)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;


/*

question....?

Write a C++ program to represent
class cal
with two object
x , y
x from ob1 - y from ob2
with three method 


*/



class Cal 
{
    private :
        int x = 0 ;
        int y = 0 ;
    public :
    Cal()
    {
        cout <<"enter value of x : " ;
        cin >> x ;
        cout <<"enter value of y : " ;
        cin >> y ;
        
    }
    void operator -( Cal ob2)
    {
        cout << x << " - " << ob2.y << " = " << x - ob2.y << endl;
    }
} ;




int main ()
{
    Cal ob1 ;
    Cal ob2 ;
    ob1 - ob2 ;
  
    return 0 ;
}
