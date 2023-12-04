#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
   if(a>=b){
    for(int i=a;i<=a;i--){
        if(a%i==0 && b%i==0)
        {
            cout<<i<<endl;
            break;
        }
        else
        continue;
    }
   }
   else if(a<=b){
    for(int i=b;i<=b;i--)
    {
        if(b%i==0 && a%i==0){
            cout<<i<<endl;
            break;
        }
        else
        continue;
    }
   }

    return 0;
}