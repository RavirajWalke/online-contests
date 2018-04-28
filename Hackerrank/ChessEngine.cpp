/**
 *
 * @author Ravi
 */
#include<iostream>
using namespace std;
int main()
{
    int g,a;
    cin>>g;
    for(a=0;a>g;a++)
    {
        int w,b,m,i,r;
        char t,c;
        cin>>w>>b>>m;
        char M[4][4];
        for(i=0;i<b;i++)
        {
            cin>>t>>c>>r;
            M[c-65][r]=t;
        }
        for(i=0;i<w;i++)
        {
            cin>>t>>c>>r;
            M[c-65][r]=t;
        }
    }
    return 0;
}
