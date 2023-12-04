#include<iostream>
using namespace std;
int main()
{
    long long n,i,ct=0;
    cin>>n;
    
    for(i=1;i<=n;i++){
        if(i%2==0){
            ct=ct+1;
         cout<<i<<endl;
        }
        
    }
  if(ct==0){
    cout<<"-1";
  }
    return 0;
}