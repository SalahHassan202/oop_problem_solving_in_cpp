// Exercise-16 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

Create an OPP program that accept Player(id , name , number) ; 
and Student(id , name , age) 
and print the data
look!!!
make sure that id must be > 0 ;
number length must be <= 2 ;
age must be > 7 and < 30 ;

*/

class Player
{
    
    public :
        int id ;
        string name ;
        string number ;

        
} ;

class Student
{
    public :
        int id ;
        string name ;
        int age ;
} ;



int main ()
{
   Player p ; 
   p.id = 3 ;
   p.name = "hassan" ;
   p.number = "20" ;

   if(p.id > 0  && p.number.size()<= 2)
   {
     cout << "id is : " << p.id << "     " <<  "name is : " << p.name << "     " <<  "number is : " << p.number << "  " << endl;
   }
   else
   {
        cout << "Enter Valid Values!!" << endl;
   }

   // Student
   Student s ; 
   s.id = 5 ;
   s.name = "salah" ;
   s.age = 22 ;

   if(s.id > 0  && s.age > 7 && s.age <30)
   {
     cout << "id is : " << s.id << "     " <<  "name is : " << s.name << "     " <<  "age is : " << s.age << "  " << endl;
   }
   else
   {
        cout << "Enter Valid Values!!" << endl;
   }
    
    return 0 ;
}
