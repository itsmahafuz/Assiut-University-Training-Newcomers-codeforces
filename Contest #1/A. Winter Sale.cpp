#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
    double x,p,m,s;
    cin>>x>>p;
    s=(1-(x/100));
    m=p/s;
    cout<<fixed<<setprecision(2)<<m;

    return 0;
}