// Exercise-19 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

Create an OPP program that accept (id , text , image) of Facebook and Linked in;
look!!!
on Facebook please print that you are in facebook application
on linked in please print that you are in linked in application

*/

class Share
{
    public :
        int id ; 
        string text ;
        string image ;

} ;
class Facebook : public Share           
{
    public :
        void print_1()
        {
            cout << "facebook" << endl;
            cout << "id is : " << id << "   " << "text is : " << text << "   " << "image is : " << image << endl; 

        }

} ;
class LinkedIn : public Share      
{
    public :
        void print_2()
        {
            cout << "linked in " << endl;
            cout << "id is : " << id << "   " << "text is : " << text << "   " << "image is : " << image << endl; 

        }


} ;



int main ()
{
    Facebook fa ;
    fa.id = 21 ;
    fa.text = "welcome" ;
    fa.image = "i am facebook image" ;
    fa.print_1() ;
    cout << "*****************************************" << endl;
    
    LinkedIn lk ;
    lk.id = 21 ;
    lk.text = "hello" ;
    lk.image = "i am linkedIN image" ;
    lk.print_2() ;
    cout << "*****************************************" << endl;


    
    return 0 ;
}
