// Exercise-24 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

*/


//! note that
// In a scalene triangle, all the sides of a triangle are of different length.
// In an isosceles triangle, two sides of a triangle are of the same measure.
// In an equilateral triangle, all the sides of a triangle are of equal length.

/*

في المثلث المختلف الأضلاع، تكون جميع أضلاع المثلث ذات أطوال مختلفة.
. في المثلث متساوي الساقين، ضلعان من المثلث لهما نفس القياس.
.في المثلث متساوي الأضلاع، جميع أضلاع المثلث متساوية في الطول.

*/

class Triangle
{

    private :
       double x ;        
       double y ;
       double z ;

    public : 
        Triangle()
        {
            cout << "enter a value of x : " << endl;
            cin >> x;
            cout << "enter a value of y : " << endl;
            cin >> y;
            cout << "enter a value of z : " << endl;
            cin >> z ;
        }
       
       void determineTypeOfTriangle()
       {
            if(x == y && y == z )
            {
                cout << "equilateral triangle" << endl;        // مثلث متساوي الاضلاع
            }
            else if(x != y && y != z && z != x) 
            {
                cout << "scalene triangle" << endl;            // مثلث مختلف الاضلاع
            }
            else  // (x == y || y == z || x == z)
            {
                cout << "isosceles triangle" << endl;         // مثلث متساوي الساقين
            } 
       }


} ;


int main ()
{
    Triangle tr ;
    tr.determineTypeOfTriangle() ;

     


    
    return 0 ;
}
