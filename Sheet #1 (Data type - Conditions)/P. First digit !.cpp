#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long x,z,i;
    cin>>x;
   z=int(log10(x)+1);
   for(i=1;i<z;i++){
    x=x/10;
   }
   
   if(x%2==0){
    cout<<"EVEN";
   }
   else{
    cout<<"ODD";
   }
    return 0;
}