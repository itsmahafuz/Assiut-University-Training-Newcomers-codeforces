#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,mx=-1;
   cin>>n;
   for(int i=0;i<n;i++){
     cin>>x;
     if(x>mx)
     {
        mx=max(mx,x);
     }
   }
   cout<<mx;
}