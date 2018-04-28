#include<iostream>
#include<conio.h>
using namespace std;
inline int maxno(int x,int y)//inline keyword sends request to compiler not the command to do it inline function so
{                            //it may or may not do so.It must contain less statements & should be normal not complex
    return((x>y)?x:y);
}
int main(void)
{
    int a,b;
    cin>>a>>b;
    cout<<"max no is:"<<maxno(a,b);//inline function places the code at the place of function call i.e. here.
    return 0;
    getch();
}
