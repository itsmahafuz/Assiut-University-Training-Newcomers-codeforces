#include<iostream>
using namespace std;
int main()
{
   char x;
   cin>>x;
   if((x>=48)&&(x<=57)){
    cout<<"IS DIGIT";
   }
   else if((x>=65)&&(x<=90)){
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL";
   }
   else if((x>=97)&&(x<=122)){
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL";
   }
    return 0;
}