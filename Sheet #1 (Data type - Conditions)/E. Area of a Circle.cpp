#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double R,area;
    double Pi=3.141592653;
    cin>>R;
    area=Pi*R*R;
    cout<<area;
 
 
    return 0;
}