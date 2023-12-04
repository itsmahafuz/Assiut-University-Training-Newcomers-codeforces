#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
     double n,k,a,x;
    cin>>n>>k>>a;
    x=(n*k)/a; //37.4
    
    long long res=x; //37
    double myres=x-res; //37.4-37=.4

    if(myres>0){
        cout<<"double";
    }
     else if(res<=2147483647){
        cout<<"int";
    }else{
        cout<<"long long";
    }
    
    return 0;
}