// Exercise-20 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to create a class called Rectangle that has private member variables for length and width.
Implement member functions to calculate the rectangle's area and perimeter.

*/

class Rectangle
{
    private : 
        float length ;
        float width ;

    public :
        Rectangle(float len, float wid)
        {
            length = len ;
            width = wid ;
        }

        
        float areaCalculate()
        {
            return (length * width);
        }
        float perimeterCalculate()
        {
            return ( 2 * (length + width));
        }
} ;


int main ()
{
   Rectangle rec(2.5 , 5.5) ;
   cout << "************************** Area **************************" << endl;
   cout << "area is : " << rec.areaCalculate() <<"(C.M)^2" <<  endl;
   cout << "************************** Perimeter **************************" << endl;
   cout << "perimeter is : " << rec.perimeterCalculate() <<"C.M" << endl;



    
    return 0 ;
}
