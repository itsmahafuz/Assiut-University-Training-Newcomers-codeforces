#include<iostream>
using namespace std;
int main()
{
    long long a,b,sm;
    char s;
    cin>>a>>s>>b;
    if(s==42){
        sm=a*b;
        cout<<sm;
    }
    else if(s==43){
        sm=a+b;
        cout<<sm;
    }
    else if(s==45){
        sm=a-b;
        cout<<sm;
    }
    else if(s==47){
        sm=a/b;
        cout<<sm;
    }
    return 0;
}