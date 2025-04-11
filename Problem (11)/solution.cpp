// Exercise-11 with Solution

/*
/// operator overloading...... (OPP)
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;




/// first method 

class Form 
{
    private :
        string name = "unkown" ;
    public :
    Form()
    {
        cout <<"enter your name : " ;
        cin >> name  ;
    }
    void plus(Form ob1 , Form ob2)
    {
        cout << ob1.name << " + " <<  ob2.name << " = " << ob1.name + ob2.name << endl;
    }
} ;




int main ()
{
    Form ob1 ;
    Form ob2 ;
    ob1.plus(ob1 , ob2) ;
  
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


class Form 
{
    private :
        string name = "unkown" ;
    public :
    Form()
    {
        cout <<"enter your name : " ;
        cin >> name  ;
    }
    void plus( Form ob2)
    {
        cout << name << " + " <<  ob2.name << " = " << name + ob2.name << endl;
    }
} ;

int main ()
{
    Form ob1 ;
    Form ob2 ;
    ob1.Formmi( ob2) ;
  
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
class Form
string name
name of ob1 = "salah"
name of ob2 = "hassan" 
ob1 + ob2 
salah hassan
with three method 


*/



class Form 
{
    private :
        string name = "unkown" ;
    public :
    Form()
    {
        cout <<"enter your name : " ;
        cin >> name  ;
    }
    void operator +( Form ob2)
    {
        cout << name + " " + ob2.name << endl;
    }
} ;




int main ()
{
    Form ob1 ;
    Form ob2 ;
    ob1 + ob2 ;
  
    return 0 ;
}
