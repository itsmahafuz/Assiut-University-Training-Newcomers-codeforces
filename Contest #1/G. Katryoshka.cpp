#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long e,m,b,min,newe,newb,newm;
    cin>>e>>m>>b;
    if(e<m && e<b){
     min=e;
    }
    else if(m<e && m<b){
        min=m;
    }else if(b<m && b<e){
        min=b;
    }
    newe=(e-min)/2;
    newb=b-min;
    newm=m-min;
    if(newe<=newb){
        cout<<(newe+min);
    }else if(newb<=newe){
        cout<<(newb+min);
    }
    return 0;
}