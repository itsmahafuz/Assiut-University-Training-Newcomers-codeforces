#include <iostream>
using namespace std;
int main()
{
    char s;
    long long n,i; 
    cin>>s;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    switch (s)
    {
    case '+':
        /* code */
       for(i=0;i<n;i++)
       {
         for(int j=0;j<a[i];j++)
         {
            cout<<"+";
         }
        cout<<"\n";
     
       } 
        break;
    case '-':
        /* code */
       for(i=0;i<n;i++)
       {
         for(int j=0;j<a[i];j++)
         {
            cout<<"-";
         }
        cout<<"\n";
     
       } 
       break;
    case '*':
        /* code */
       for(i=0;i<n;i++)
       {
         for(int j=0;j<a[i];j++)
         {
            cout<<"*";
         }
        cout<<"\n";
     
       } 
       break;
    case '/':
        /* code */
       for(i=0;i<n;i++)
       {
         for(int j=0;j<a[i];j++)
         {
            cout<<"/";
         }
        cout<<"\n";
     
       } 
       break;
    
    default:
        break;
    }  
    
    return 0;
}