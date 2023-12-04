#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,f,s,x;
    cin>>n;
    if(n==0 || n==1)
    cout<<"0";
    else{
    f=0;
    s=1;
    cout<<f<<" "<<s<<" ";
    for(int i=2;i<n;i++)
    {
       x=f+s;
        cout<<x<<" ";
        f=s;
        s=x;
    }
    }
}