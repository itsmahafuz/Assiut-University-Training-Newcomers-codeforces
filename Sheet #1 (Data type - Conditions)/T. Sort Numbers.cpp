#include<iostream>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    if((a<=b)&&(a<=c)){
        if(b<=c){
            cout<<a<<endl<<b<<endl<<c<<endl<<endl;
        }
        else{
            cout<<a<<endl<<c<<endl<<b<<endl<<endl;
        }
    }
     else if((b<=a)&&(b<=c)){
        if(a<=c){
            cout<<b<<endl<<a<<endl<<c<<endl<<endl;
        }
        else{
            cout<<b<<endl<<c<<endl<<a<<endl<<endl;
        }
    }

      else if((c<=a)&&(c<=b)){
        if(a<=b){
            cout<<c<<endl<<a<<endl<<b<<endl<<endl;
        }
        else{
            cout<<c<<endl<<b<<endl<<a<<endl<<endl;
        }
    }
      cout<<a<<endl<<b<<endl<<c;
    return 0;
}