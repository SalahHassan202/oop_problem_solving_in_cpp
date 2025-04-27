// Exercise-27 with Solution
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> 
using namespace std ;

/*

qusetion...?

please create an app facebook that acccept data only by constructor 
1 --> id , text 
2 --> id , text , image 
look !!!
no setter (there are getter)
no default constructor 


*/


class Facebook
{

    private :
        int id ;
        string text ;
        string image ;

    public : 
        Facebook(int i , string t , string im)
        {
            id = i ;
            text = t ;
            image = im ;
        }

        int getId()
        {
            return id ;
        }
        string getText()
        {
            return text ;
        }
        string getImage()
        {
            return image ;
        }
   
} ;


int main ()
{
    Facebook fa (211 , "post" , "image");
    cout << fa.getId() << "     " << fa.getText() << "     " << fa.getImage() << endl;



    
    return 0 ;
}
