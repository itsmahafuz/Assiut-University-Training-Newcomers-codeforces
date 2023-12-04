#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        int p=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
               p=1;
                break;
            }
        }
        if(p==0){
            cout<<i<<" ";
        }
    }
    
    return 0;
}