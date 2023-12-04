#include<iostream>
using namespace std;
int main()
{
    int x;
    while(true){
        cin>>x;
        if(x==1999){
            cout<<"Correct"<<endl;
            break;
        }else{
            cout<<"Wrong"<<endl;
        }
    }
}