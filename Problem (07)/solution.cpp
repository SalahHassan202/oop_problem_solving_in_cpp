// Exercise-7 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;
/*

question.....?

Write a C++ program  to represent the rectangle class , 
define two data members with constructor overloading add
a member function outside the class for printing 
define 2 rectangle objects , 
use friend function to find the biggest rectangle area ;

*/
static int counter = 1 ; 
class Rectangle
{
    private :
        int width  = 0 ;
        int height = 0 ;
    public :
        Rectangle()
        {
            cout << "this is the rectangle number : " << counter << endl;
            cout << "enter the width of rectangle : " ;
            cin >> width ;
            cout << "enter the height of rectangle : " ;
            cin >> height ;

            counter++ ;
        }
        int cal_area ()
        {
            int area = width * height ;
            return area ;
        }

        friend void find(Rectangle ob1 , Rectangle ob2 ) ;

} ;
void find(Rectangle ob1 , Rectangle ob2 )   // use friend function to find the biggest rectangle area ;
{
    cout <<"Hello : " << endl;
    if(ob1.cal_area() > ob2.cal_area())
    {
        cout << "the area of first rectangle is the biggest area " << ob1.cal_area() << endl;
    }
    else if(ob2.cal_area() > ob1.cal_area())
    {
        cout << "the area of second rectangle is the biggest area " << ob2.cal_area() << endl;
    }
}

int main ()
{
    
    Rectangle ob1 ;
    Rectangle ob2 ;
    find(ob1 , ob2 ) ;

    return 0 ;
}