#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if((x>='0')&&(x<='9')){
        cout<<"IS DIGIT";
    }
    else if((x>='a')&&(x<='z')){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL";
    }
    else if((x>='A')&&(x<'Z')){
        cout<< "ALPHA"<<endl;
        cout<<"IS CAPITAL";
    }
    return 0;
 
}