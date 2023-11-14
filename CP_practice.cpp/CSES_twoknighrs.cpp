#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;
int main(){
    long long n,ans,x;
    cin>>n;
    for(long long i=1;i<=n;i++){
        if(i==1){ans=0;}
        else if(i==2){ans=6;}
        else if(i==3){ans=28;}
        else if(i==4){ans=96;}
        else{
            ans=(i*i*(i*i-1)-4*2-8*3-4*(i-4)*4-4*4-4*(i-4)*6-(i-4)*(i-4)*8)/2; 
        }
        cout<<ans<<endl;
    }
return 0;
}