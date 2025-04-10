// Exercise-10 with Solution

/*

/// operator overloading...... (OPP)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;




/// first method 

class Sum 
{
    private :
        int x = 0 ;
    public :
    Sum()
    {
        cout <<"enter a value of x : " ;
        cin >> x  ;
    }
    void summition(Sum ob1 , Sum ob2)
    {
        cout << ob1.x << " + " <<  ob2.x << " = " << ob1.x + ob2.x << endl;
    }
} ;




int main ()
{
    Sum ob1 ;
    Sum ob2 ;
    ob1.summition(ob1 , ob2) ;
  
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


class Sum 
{
    private :
        int x = 0 ;
    public :
    Sum()
    {
        cout <<"enter a value of x : " ;
        cin >> x  ;
    }
    void summition( Sum ob2)
    {
        cout << x << " + " <<  ob2.x << " = " << x + ob2.x << endl;
    }
} ;

int main ()
{
    Sum ob1 ;
    Sum ob2 ;
    ob1.summition( ob2) ;
  
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
class sum
int x 
ob1 , ob2 
ob1 + ob2 
with three method 


*/



class Sum 
{
    private :
        int x = 0 ;
    public :
    Sum()
    {
        cout <<"enter a value of x : " ;
        cin >> x  ;
    }
    void operator +( Sum ob2)
    {
        cout << x << " + " <<  ob2.x << " = " << x + ob2.x << endl;
    }
} ;




int main ()
{
    Sum ob1 ;
    Sum ob2 ;
    ob1 + ob2 ;
  
    return 0 ;
}
