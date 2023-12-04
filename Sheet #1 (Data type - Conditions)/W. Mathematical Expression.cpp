#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    if(s==43){
        if((a+b)==c){
            cout<<"Yes";
        }
        else{
            cout<<(a+b);
        }
    }
    if(s==45){
        if((a-b)==c){
            cout<<"Yes";
        }
        else{
            cout<<(a-b);
        }
    }
    if(s==42){
        if((a*b)==c){
            cout<<"Yes";
        }
        else{
            cout<<(a*b);
        }
    }
    if(s==47){
        if((a/b)==c){
            cout<<"Yes";
        }
        else{
            cout<<(a/b);
        }
    }

    return 0;
}