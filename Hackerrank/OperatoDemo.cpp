#include<iostream>
using namespace std;
int main(void)
{
    double meal_cost;
    int tip,tax;
    cin>>meal_cost;
    cin>>tip;
    cin>>tax;
    double dtotal_cost=meal_cost+(meal_cost*tip/100)+(meal_cost*tax/100);
    int itotal_cost=(int)dtotal_cost;
    if(itotal_cost+1 < dtotal_cost+0.5)
       itotal_cost++;
    cout<<"The total meal cost is "<<itotal_cost<<" dollars.";
    return 0;
}
