#include<bits/stdc++.h>

#define ll long long

using namespace std;

ll solve(ll n, ll m, ll k){
    if(k<=1){
        return 0;
    }
    ll maxedges=(n)*(n-1)/2;
    if(n==2){
        maxedges=1;
    }
    if(n==3){
        maxedges=3;
    }
    if(m>maxedges){
        return 0;
    }
    if(m<(n-1)){
        return 0;
    }
    if(k>=4){
        return 1;
    }
    if(n==1 && k>=2){
        return 1;
    }
    if(k==3){
        if(n==2){
            return 1;
        }
        if(m==maxedges){
            return 1;
        }
    }
    return 0;
    
}
int main(){
    ll t,n,m,k,ans;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        ans=solve(n,m,k);
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}