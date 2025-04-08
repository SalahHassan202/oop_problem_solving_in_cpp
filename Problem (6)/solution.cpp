// Exercise-6 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;
/*

question.....?

Write a C++ program to implement a class called Circle that has private member variables for radius. 
Include member functions to calculate the circle's area and circumference.

*/

// const double PI = 3.14159;     // Define the value of PI as a constant    // ===> we need <cmath> library 
class Circle
{
    private :
        double radius ;
    public :
        Circle()
        {
            cout << "enter the radius of the circle : " ;
            cin >> radius ;
        }
        double cal_area ()
        {
           double area = 3.14 * radius * radius ;
           cout << "area is : " << area << endl;
        }
        double cal_Circumference ()
        {
           double Circumference = 2 * 3.14 * radius  ;
           cout << "Circumference is : " << Circumference << endl;
        }

} ;

int main ()
{
    Circle ob1 ;
    ob1.cal_area() ;
    ob1.cal_Circumference() ;


    return 0 ;
}