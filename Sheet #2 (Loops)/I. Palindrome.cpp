#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,s=0,tem;
    cin>>n;
    tem=n;
    //ItsMahafuz
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(tem==s)
    {
        cout<<tem<<endl<<"YES"<<endl;
    }else{
        cout<<s<<endl<<"NO"<<endl;
    }
    return 0;
}