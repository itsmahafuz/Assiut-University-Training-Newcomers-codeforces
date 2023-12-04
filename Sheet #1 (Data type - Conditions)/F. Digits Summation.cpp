#include<iostream>
using namespace std;
int main()
{
    int i,j;
    long long N,M,sum;
    cin>>N>>M;
    for(i=1;i<N;i++){
        N=N%10;
    }
for(j=1;j<M;j++){
    M=M%10;
}
sum=N+M;
cout<<sum;
    return 0;
}
