#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,f;
    cin>>a>>b;
    f=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(f)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(f)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(f);

    return 0;
}
