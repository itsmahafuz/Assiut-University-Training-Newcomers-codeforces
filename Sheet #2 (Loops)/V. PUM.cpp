#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    for(int i=1;i<=n*4;i++)
    {

        if(i%4==0)
        {
            cout<<"PUM\n";
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}