#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long d1,d2,n;
    cin>>n;
    d1=n%10;
    d2=n/10;
    if((d1%d2==0)||(d2%d1==0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}