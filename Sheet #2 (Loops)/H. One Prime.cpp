#include<iostream>
using namespace std;
int main()
{
    long long x,p=0;
    cin>>x;
        for(int i=2;i<x;i++){
            if(x%i==0){
                cout<<"NO"<<endl;
                
                p=1;
                break;
            }
        }
        if(p==0){
            cout<<"YES"<<endl;
        } 
}