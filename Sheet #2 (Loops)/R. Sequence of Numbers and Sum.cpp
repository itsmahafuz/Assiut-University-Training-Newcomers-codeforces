#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,max,min;
    
    while(cin>>n>>m)
    {
        long long sum=0;
        if(m<=0 || n<=0){
            return 0;
        }
        if(n>=m)
        {
            max=n;
            min=m;
        }
        else{
            max=m;
            min=n;
        }
        for(int i=min;i<=max;i++)
        {
            cout<<i<<" ";
            sum=sum+i;
        }
        cout<<" sum="<<sum<<endl;
    }
    return 0;
}