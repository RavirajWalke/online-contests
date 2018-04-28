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
    int h[26],i,j;
    for(int i=0;i<26;i++)
        cin>>h[i];
    string word;
    cin>>word;
    int w=word.length();
    int a[w],max=-1;
    for(int i=0;i<w;i++)
    {
        int c=word[i];
        a[i]=h[c-97];
        if(a[i]>max)
            max=a[i];
    }
    cout<<max*w<<endl;
    return 0;
}
