/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include <fstream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string one("hi hello!");
    cout<<one<<endl;
    string two(5,'@');
    cout<<two<<endl;
    string three(one);
    cout<<three<<endl;
    string four;
    four=one+two;
    cout<<four<<endl;
    cout<<four.find("@@")<<endl;
    char all[]="hi i am always here";
    string five(all,20);
    cout<<five<<endl;
    string six(all+4,all+7);
    cout<<six<<endl;
    string seven(five,3,7);
    cout<<seven<<endl;
    return 0;
}
