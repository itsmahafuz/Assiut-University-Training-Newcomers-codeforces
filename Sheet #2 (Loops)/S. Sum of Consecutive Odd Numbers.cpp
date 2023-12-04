#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,y;
    cin>>n;
    while(n--){
        long long sum=0,max,min;
         cin>>x>>y;
            if(x>=y){
                max=x;
                min=y;
            }else{
                max=y;
                min=x;
            }
            for(int i=min+1;i<max;i++)
            {
                if(i%2!=0){
                    sum=sum+i;
                }
            }
            cout<<sum<<endl;
    }
    return 0;
}