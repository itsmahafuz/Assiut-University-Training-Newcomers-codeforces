#include<iostream>
using namespace std;
int main()
{
    double num;
    int x;
    cin>>num;
    x=num;
    if(num==x){
        cout<<"int "<<x;
    }
    else{
        cout<<"float "<<x<<" "<<(num-x);
    }
    return 0;
}