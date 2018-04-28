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
 for(a=0;a<g;a++)
 {
     int n,i,c,count=0;
     cin>>n;
     string s;
     cin>>s;
     for(i=0;i<n;i++)
     {
         if(s[i]=='_')
            count++;
     }
     if(count==0){
     for(i=0;i<n;i+=2)
     {
        if(s[i]!='_')
        {
            if(s[i]==s[i+1]||s[i]==s[i-1])
                c=0;
            else
            {
            c=1;
            break;
        }
        }
    }
    }
    else{
     for(i=0;i<n;i++)
     {
         if(s[i]!='_')
         {
             char b=s[i];
             for(int j=i+1;j<n;j++)
             {
                 if(s[j]==b)
                 {
                     s[j]='_';
                     s[i]='_';
                 }
             }
         }
     }
     //cout<<s<<endl;
     for(i=0;i<n;i++)
     {
         if(s[i]!='_')
         {
             c=1;
             break;
         }
        else
            c=0;
     }
    }
     if(c==1)
        cout<<"NO"<<endl;
     else
        cout<<"YES"<<endl;
 }
 return 0;
}
