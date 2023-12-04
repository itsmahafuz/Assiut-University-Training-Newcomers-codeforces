#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    char s;
    cin>>a>>s>>b;
    if(s==60){
        if(a<b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    } 
     if(s==61){
        if(a==b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
     if(s==62){
        if(a>b){
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    return 0;
}