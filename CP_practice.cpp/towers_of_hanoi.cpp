#include<bits/stdc++.h>

#define ll long long

using namespace std;

void solve(int n,int src,int dest){
    if(n==1){
        cout<<src<<" "<<dest<<endl;
        return;
    }
    int third;
    if(src+dest==3){third=3;}
    if(src+dest==5){third=1;}
    if(src+dest==4){third=2;}
    solve(n-1,src,third);
    cout<<src<<" "<<dest<<endl;
    solve(n-1,third,dest);
}

int main(){
    int n;
    cin>>n;
    cout<<(int)pow(2,n)-1<<endl;
    solve(n,1,3);
return 0;
}