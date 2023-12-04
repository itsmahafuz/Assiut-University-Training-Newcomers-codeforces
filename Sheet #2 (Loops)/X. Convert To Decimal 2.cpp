#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n,digit;
    
    cin>>t;
    while(t--)
    {
        int count=0;
        long long bi=0;
        cin>>n;
        while(n>=1)
        {
            digit=n%2;
            if(digit==1){
                bi=bi+1*pow(2,count);
                count=count+1;
            }
            n=n/2;
        }
        cout<<bi<<endl;    
    }
}