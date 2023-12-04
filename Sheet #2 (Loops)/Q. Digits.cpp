#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long t,n,d;
    cin>>t;
        for(int i=0;i<t;i++)
        {
            cin>>n;
            if(n==0)
            {
                cout<<"0";
            }
            else{
                while(n>0)
                {
                    d=n%10;
                    n=n/10;
                    cout<<d<<" ";
                }
            }
            cout<<"\n";
        }
    return 0;
}