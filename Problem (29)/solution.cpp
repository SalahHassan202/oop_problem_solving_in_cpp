// Exercise-29 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

question...?

write the program to print the average of three numbers entered by user 
creating a class named "Average" 
Having a method to calculate the average ;


*/


class Average
{

    private :
        double num1 , num2 , num3 ;
    public : 
        Average()
        {
           cout << "Enter num1 : " << endl;
           cin >> num1 ;
           cout << "Enter num2 : " << endl;
           cin >> num2 ;
           cout << "Enter num3 : " << endl;
           cin >> num3 ;
        }

        double calculateAverage()
        {
            return ((num1 + num2 + num3) / 3) ;
        }

        
   
} ;


int main ()
{
    Average av ;
    cout << "Average Of Three Number Is : " <<  av.calculateAverage()<< endl;



    
    return 0 ;
}
