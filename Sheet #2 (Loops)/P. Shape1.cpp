#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
