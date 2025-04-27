// Exercise-28 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

write the program to print area and periemeter of a triangle slides are 3 , 4  and 5
uints by creating a class named Triangle without any parameter on constructor


*/


class Triangle
{

    private :
        double x , y , h ;
    public : 
        Triangle()
        {
            x = 3 ;
            y = 4 ;
            h = 5 ;
        }
        // setter
        void setX(double x)
        {
            this->x= x ;
        }
        void setY(double y)
        {
            this->y = y ;
        }
        void setH(double h)
        {
            this->h = h ;
        }

        // getter
        double getX()
        {
            return x ;
        }
        double getY()
        {
            return y ;
        }
        double getH()
        {
            return h ;
        }

        // area
        double getArea()
        {
            return (0.5 * y * h) ;
        }

        // perimeter
        double getPerimeter()
        {
            return (x + y + h) ;
        }

        
   
} ;


int main ()
{
    Triangle t ;
    cout << "Area Of Triangle Is : " <<  t.getArea()<< endl;
    cout << "Perimeter Of Triangle Is : " << t.getPerimeter()<< endl;



    
    return 0 ;
}
