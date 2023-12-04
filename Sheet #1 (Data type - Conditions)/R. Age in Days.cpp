#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,y,m,x,d;
    cin>>n;
    y=n/365;
    x=n%365;
    m=x/30;
    d=x%30;
    cout<<y<<" "<<"years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;
    return 0;
}