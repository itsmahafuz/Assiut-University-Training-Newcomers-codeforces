//ItsMahafuz
#include<iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if((b-a==1)||(a-b==1)||(a==b && a!=0 &&b!=0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}