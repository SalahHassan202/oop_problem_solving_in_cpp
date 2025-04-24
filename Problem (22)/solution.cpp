// Exercise-22 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to create a class called Car that has private member variables for company, model, and year.
Implement member functions to get and set these variables.

*/

class Car
{

    private :
        string model ;
        int year ;
        string company ;

    public : 
    // set function
        void setmodel(string model)
        {
            this->model = model ;
        }
        void setyear(int year)
        {
            this->year = year ;
        }
        void setcompany(string company)
        {
            this->company = company ;
        }

    // get function

        string getmodel()
        {
            return  model ;
        }
        int getyear()
        {
            return year ;
        }
        string getcompany()
        {
            return  company ;
        }


} ;


int main ()
{
    Car per ;
    per.setmodel("BMW") ;
    per.setyear(2002) ;
    per.setcompany("USA") ;

    cout << "model is :: " << per.getmodel() << "     " << "year is :: " << per.getyear() << "     " << "company is :: " << per.getcompany() << endl; 


    
    return 0 ;
}
