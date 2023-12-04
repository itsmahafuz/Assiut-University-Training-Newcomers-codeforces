#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,div;
    cin>>n;
    div=n;
    for(int i=1;i<=n;i++)
    {
        if(div%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}