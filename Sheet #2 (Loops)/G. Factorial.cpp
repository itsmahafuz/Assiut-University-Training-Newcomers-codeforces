#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,j;  
    cin>>t;
    while(t--){
        cin>>n;
        long long ft=1;
        for(j=1;j<=n;j++){
            ft=ft*j;
        }
        cout<<ft<<endl;
    }
    return 0;
}