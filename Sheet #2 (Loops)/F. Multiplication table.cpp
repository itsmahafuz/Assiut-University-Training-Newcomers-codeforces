#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,i;
    cin>>n;
    for(i=1;i<=12;i++){
        x=n*i;
        cout<<n<<" * "<<i<<" = "<<x<<endl;
    }
    return 0;
}