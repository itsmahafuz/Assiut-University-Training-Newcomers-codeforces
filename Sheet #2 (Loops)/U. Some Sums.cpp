#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    long long sum=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
    {
        long long x=i;
       long long sd=0;
       
       while(x){
        sd=sd+x%10;
        x=x/10;
       }
       if(sd>=a && sd<=b){
        
        sum=sum+i;

       }
    }
    cout<<sum;
    return 0;
}