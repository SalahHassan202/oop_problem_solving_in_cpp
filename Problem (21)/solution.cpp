// Exercise-21 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Write a C++ program to create a class called Person that has private member variables for name, age and country.
Implement member functions to set and get the values of these variables.

*/

class Person
{

    private :
        string name ;
        int age ;
        string country ;

    public : 
    // set function
        void setName(string name)
        {
            this->name = name ;
        }
        void setAge(int age)
        {
            this->age = age ;
        }
        void setCountry(string country)
        {
            this->country = country ;
        }

    // get function

        string getName()
        {
            return  name ;
        }
        int getAge()
        {
            return age ;
        }
        string getCountry()
        {
            return  country ;
        }


} ;


int main ()
{
    Person per ;
    per.setName("salah") ;
    per.setAge(22) ;
    per.setCountry("Egypt") ;

    cout << "Name is :: " << per.getName() << "     " << "Age is :: " << per.getAge() << "     " << "Country is :: " << per.getCountry() << endl; 


    
    return 0 ;
}
