#include<iostream>
#include<iomanip>
using namespace std;
int minsteps(int a,int b,int c,int d){
    int steps;
    if(d<b){
        return -1;
    }
    if((c-a)>(d-b)){
        return -1;
    }
    steps=d-b;
    a=a+steps;
    int e=c-a;
    if(e<0){
        e=-e;
    }
    steps=steps+e;
    return steps;
}
int main(){
    int a,b,c,d,t,ans;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        ans=minsteps(a,b,c,d);
        cout<<ans<<endl;
    }

return 0;
}