// parameterized constructor.... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

/*

question.....?

class cal 
int n1 , n2 
default constractor to set the values by cin 
parameterized constructor to set the values by programmer
4 function 
sum() to add n1 , n2 
divide() to divide n1 , n2  and the result must be in decimal
mod() to modulus n1 , n2 
mult() to multiply n1 , n2 
two object in int main

*/

class Cal 
{
    private :
        int n1 ; 
        int n2 ;
    public :
        Cal()              // default constractor
        {
            cout << "enter the value of n1 : " ;
            cin >> n1 ;
            cout << endl;
            cout << "enter the value of n2 : " ;
            cin >> n2 ;
        }
        Cal (int x , int y )                   // parameterized constructor
        {
            n1 = x ;
            n2 = y ;
        }

        int sum()
        {
            return n1 + n2 ;
        }
        
        int div()
        {
            return (float)(n1 / n2) ;          // typeCasting
        }

        int mod()
        {
            return n1 % n2 ;
        }

        int mul()
        {
            return n1 * n2 ;
        }

} ;
int main ()
{      
    Cal ob1 ;
    cout << ob1.sum() << endl;
    cout << ob1.div() << endl;
    cout << ob1.mod() << endl;
    cout << ob1.mul() << endl;
    
    cout << "*****************************" << endl;

    Cal ob2(1 , 2) ;
    cout << ob2.sum() << endl;
    cout << ob2.div() << endl;
    cout << ob2.mod() << endl;
    cout << ob2.mul() << endl;

   
    return 0 ;
}