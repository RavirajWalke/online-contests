#include<iostream>
using namespace std;
int main()
{
    int T,i;
    cin>>T;
    for(i=0;i<T;i++)
    {
        int N,M,S;
        cin>>N>>M>>S;
        int PoiSweet=(S-1)+(M%N);
        if(PoiSweet==0)
            PoiSweet=N;
        cout<<PoiSweet<<endl;
    }
}
