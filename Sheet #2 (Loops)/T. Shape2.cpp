#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long s=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=1;j--){
            cout<<" ";
        }
        
        for(int k=1;k<2*i;k++)
        {
            cout<<"*";
        }
       cout<<endl;
        s=s-1;
    }
    return 0;
}