// Exercise-17 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Create an OPP program that accept Player(id , name , number , phone) ; 
Student(id , name , age , phone) ; 
Person(id , name ) ; 

*/

class Person
{
    public :
        int id ;
        string name ;   
} ;
class Phone
{
  public :
      int phone ;
} ;

class Player : public Person , public Phone
{
    public :
        string number ;
        
} ;

class Student : public Person
{
    public :
        int age ;
        
} ;



int main ()
{
  Person p ;
  p.id = 321 ;
  p.name = "salah" ;

  cout << "id is : " << p.id << "      ,     " << "name is " << p.name << endl;
  cout << "*****************************************" << endl ;

  Phone ph ;
  ph.phone = 01021045230 ;
  cout << "phone is : " << ph.phone << endl;
  cout << "*****************************************" << endl ;

  Player pl ;
  pl.number = "210" ;
  cout << "number is : " << pl.number << endl;
  cout << "*****************************************" << endl ;

  Student st ;
  st.age = 20 ;
  cout << "age is : " << st.age << endl;
  cout << "*****************************************" << endl ;

    
    return 0 ;
}
