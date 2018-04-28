#include<iostream>//all objects of input output standard library stream & input output functions are defined & declared in this header file
#include<conio.h>//the IStrem and OStream classes are defined in iostream and cin & cout are objects of  respective classes.
using namespace std;
//use of class for declaration of variables and functions
class Sum
{
    int a,b,c;
    public:
    void getinput(void);//return_type function_name(arguments)
    void printsum(void)//if no argument then void***  function defination inside class****
    {
         cout<<"sum of "<<a<<" and "<<b<<" is "<<a+b;
    }
};
void Sum::getinput(void)//  ::  -scope resolution operator
{
   cout<<"enter two numbers"<<endl;// :- << is insertion or put to operator
   cin>>a>>b;//  >> :- is extraction or get from operator
}
int main()
{
    Sum obj;
    obj.getinput();
    obj.printsum();
    return 0;
}
