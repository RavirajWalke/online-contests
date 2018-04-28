/*
 * @author RaviRaj96
 */

#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<vector>
#include<algorithm>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    string s;
    cout<<"Enter name of file : "<<endl;
    getline(cin,s);
    fin.open(s.c_str());
    if(fin.is_open()==false)
    {
        cerr<<endl<<"Can't Open file";
        exit(EXIT_FAILURE);
    }
    string item;
    int count=0;
    cout<<"contents of file are:";
    getline(fin,item,':');
    while(fin)
    {
        count++;
        cout<<count<<" : "<<item<<endl;
        getline(fin,item,':');
    }
    fin.close();
    return 0;
}
