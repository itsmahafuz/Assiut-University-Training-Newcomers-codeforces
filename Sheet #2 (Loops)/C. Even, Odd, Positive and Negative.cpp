#include<iostream>
using namespace std;
int main()
{
    long long n,i,ct=0,od=0,pt=0,nt=0;
    
    cin>>n;
    int a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            ct=ct+1;

        }else{
            od=od+1;
        }
        if(a[i]>0){
            pt=pt+1;
        }else if(a[i]<0)
        {
            nt=nt+1;
        }
    }
    cout<<"Even: "<<ct<<endl;
     cout<<"Odd: "<<od<<endl;
      cout<<"Positive: "<<pt<<endl;
       cout<<"Negative: "<<nt<<endl;

    return 0;
}