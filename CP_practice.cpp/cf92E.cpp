#include<bits/stdc++.h>

#define ll long long
#define MOD 1000000007
using namespace std;
ll fact(int k){
    ll ans=1;
    for(int i=1;i<=k;i++){
        ans=(ans*i)%MOD;
    }
    return ans;
}
ll P(int k, int n){
    ll ans=1;
    for(int i=k;i>(k-n);i--){
        ans=(ans*i)%MOD;
    }
    return ans;
}
int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll ans;
        if(n<k){
            ans=P(k,n);
            cout<<ans<<endl;
            continue;
        }
        ans=fact(k);
        cout<<ans<<endl;
    }
return 0;
}