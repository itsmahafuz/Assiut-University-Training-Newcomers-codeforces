#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    cin>>n;
    s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=1;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"*";
        }
        cout<<"\n";
        s=s-1;
    }
    long long x=1;
     for(int i=n;i>=1;i--)
    {
        for(int j=1;j<x;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<2*i;k++){
            cout<<"*";
        }
        cout<<"\n";
        x++ ;
    }
    return 0;
}