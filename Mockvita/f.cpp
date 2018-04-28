/**
 *
 * @author Ravi
 */
#include<iostream>
/*struct match
{
    string t1,t2;
    int s1,s2;
};*/
using namespace std;
int main()
{
 int n,m,i,j,s1,s2;
 string t1,t2;
 cin>>n;
 string t[n];
 int p[n],gf[n],ga[n],gd[n],ma[n];
 for(i=0;i<n;i++)
 {
     cin>>t[i];
     p[i]=0;gf[i]=0;ga[i]=0;
 }
 cin>>m;
 for(i=0;i<m;i++)
 {
    cin>>t1>>t2>>s1>>s2;
    for(j=0;j<n;j++)
    {
        if(t[j]==t1)
        {
            gf[j]+=s1;
            ga[j]+=s2;
            //gd[i]=gf[i]-ga[i];
            if(s1>s2)
                p[j]+=2;
            if(s1==s2)
                p[j]+=1;
        }
        if(t[j]==t2)
        {
            gf[j]+=s2;
            ga[j]+=s1;
            if(s1<s2)
                p[j]+=2;
            if(s1==s2)
                p[j]+=1;
            //gd[i]=gf[i]-ga[i];
        }

    }
 }
 cout<<endl<<"********************************************************************************************************";
 cout<<"team"<<"\t"<<"GF"<<"\t"<<"GA"<<"\t"<<"GD"<<"\t"<<"Points"<<endl;
 for(i=0;i<n;i++)
 {
     gd[i]=gf[i]-ga[i];
     cout<<t[i]<<"\t"<<gf[i]<<"\t"<<ga[i]<<"\t"<<gd[i]<<"\t"<<p[i]<<endl;
 }
 cout<<"***************************************************************************************************************";
 return 0;
}
