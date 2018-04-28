/**
 *
 * @author Ravi
 */
#include<iostream>
#include<string>
/*struct match
{
    string t1,t2;
    int s1,s2;
};*/
using namespace std;
int main()
{
 int n,m,i,j,s1,s2,temp1;
 string t1,t2,temp2;
 cin>>n;
 string t[n];
 int p[n],gf[n],ga[n],gd[n],ma[n];
 for(i=0;i<n;i++)
 {
     cin>>t[i];
     p[i]=0;gf[i]=0;ga[i]=0,ma[i]=0;
 }
 cin>>m;
 for(i=0;i<m;i++)
 {
    cin>>t1>>t2>>s1>>s2;
    if(t1==t2)
    {
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    for(j=0;j<n;j++)
    {
        if(t[j]==t1)
        {
            ma[j]++;
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
            ma[j]++;
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
 for(i=0;i<n;i++)
 {
     gd[i]=gf[i]-ga[i];
 }
 for(i=0;i<n;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if(p[j]>p[j+1])
            {
                temp1=p[j];
                p[j]=p[j+1];
                p[j+1]=temp1;

                temp1=gf[j];
                gf[j]=gf[j+1];
                gf[j+1]=temp1;

                temp1=gd[j];
                gd[j]=gd[j+1];
                gd[j+1]=temp1;

                temp2=t[j];
                t[j]=t[j+1];
                t[j+1]=temp2;
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(p[i]==p[i-1])
        {
            if(gd[i-1]>gd[i])
            {
                temp2=t[i];
                t[i]=t[i-1];
                t[i-1]=temp2;
            }
                //cout<<t[i]<<endl;
            else if(gd[i-1]<gd[i]){}
                //cout<<t[i-1]<<endl;
            else
            {
                if(gf[i-1]>gf[i])
                {
                    temp2=t[i];
                    t[i]=t[i-1];
                    t[i-1]=temp2;
                }
                    //cout<<t[i]<<endl;
                else if(gf[i-1]<gf[i]){}
                    //cout<<t[i-1]<<endl;
                else
                {
                    if(t[i].compare(t[i-1])>0)
                    {

                    }
                        //cout<<t[i]<<endl;
                    else
                    {
                        temp2=t[i];
                        t[i]=t[i-1];
                        t[i-1]=temp2;
                    }
                        //cout<<t[i-1]<<endl;
                }
            }
        }
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<t[i]<<endl;
    }
return 0;
}
