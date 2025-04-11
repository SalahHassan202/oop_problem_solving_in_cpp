// exercise 2...... (OPP)
#include <iostream>
# include <string >
#include <algorithm>
#include <cmath>
using namespace std;

/*

question.........?

class Student 
string name , int mark ;
parameterizer constructor to take the values from programmer 
default constructor to take input from user 
friend function called sum with 3 objects تتطلع مجموع الدرجات
function called checkMarks
هتطلع اكبر درجه في الطلاب و هتطلع اسم الطالب صاحب اعلي درجه 
3 objects user are salah , ali , hassan ;

*/

class Student
{
    private :
        string name ;
        int mark ;
    public :
    Student()                                 // default constructor
    {
        cout << "Enter The Name : " ;
        cin >> name ;
        cout << "Enter The Mark : " ;
        cin >> mark ;
    }

    Student(string n , int m)             // parameterizer constructor
    {
        name = n ; 
        mark = m ;
    }
    friend int sum(Student ob1 , Student ob2 , Student ob3) ;     // friend function 
    
    int checkMarks(Student ob1 , Student ob2 , Student ob3)
    {
        if(ob1.mark > ob2.mark && ob1.mark > ob3.mark)
        {
            cout << ob1.name <<" Congratulation Your Are The First" << endl;
        }
        else if(ob2.mark > ob1.mark && ob2.mark > ob3.mark)
        {
            cout << ob2.name <<" Congratulation Your Are The First" << endl;
        }
        else if(ob3.mark > ob1.mark && ob3.mark > ob2.mark)
        {
            cout << ob3.name <<" Congratulation Your Are The First" << endl;
        }
        else
        {
            cout <<"Congratulation All The Marks Is Equal" << endl;
        }
    }
} ;
int sum(Student ob1 , Student ob2 , Student ob3)             // friend function 
{
    int sum = ( ob1.mark + ob2.mark + ob3.mark) ;
    cout << "The Sum Of All Marks Is " << sum << endl;
}

int main ()
{      
    
   Student ob1 ;
   Student ob2 ;
   Student ob3 ;
   sum(ob1 , ob2 , ob3) ;                 // print the The Sum Of All Marks
   ob1.checkMarks(ob1 , ob2 , ob3) ;
    


    return 0 ;
}