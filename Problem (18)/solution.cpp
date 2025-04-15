// Exercise-18 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Create an OPP program that accept (id , name ) of private school ; 
and accept (id , name ) of public school


*/

/* 
class PrivateSchool
{
    private :
        int id ;
        string name ;
    public :
    ///! set function
        void setId(int id)
        {
            this->id = id ;
        }
        void setName(string name)
        {
            this->name = name ;
        }
    ///! get function 
        int getId()
        {
            return id ;
        }
        string getName()
        {
            return name ;
        }

} ;

class PublicSchool
{
    private :
        int id ;
        string name ;
    public :
    ///! set function
        void setId(int id)
        {
            this->id = id ;
        }
        void setName(string name)
        {
            this->name = name ;
        }
    ///! get function 
        int getId()
        {
            return id ;
        }
        string getName()
        {
            return name ;
        }

} ;
 */
class BaseEntity
{
    private :
        int id ;
        string name ;
    public :
    // set function
        void setId(int id)
        {
            this->id = id ;
        }
        void setName(string name)
        {
            this->name = name ;
        }
    // get function 
        int getId()
        {
            return id ;
        }
        string getName()
        {
            return name ;
        }

} ;
// inheritance
class PrivateSchool : public BaseEntity 
{

} ;

// inheritance
class PublicSchool : public BaseEntity 
{

} ;
int main ()
{
    PrivateSchool pr ;
    pr.setId(12) ;
    pr.setName("PrivateSchool") ;
    cout << pr.getId() <<"          " <<  pr.getName() << endl;
    cout << "**********************************" << endl;
    PublicSchool pu ;
    pu.setId(13) ;
    pu.setName("PublicSchool") ;
    cout << pu.getId() <<"          " <<  pu.getName() << endl;

    
    return 0 ;
}
