#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<ll> arr;
        ll temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        ll ans=0;
        if(k>n){
            cout<<0<<endl;
            continue;
        }
        sort(arr.begin(),arr.end(),greater<ll>());
        while(arr.size()>=k){
            for(int i=0;i<k;i++){
                arr[i]--;
            }
            ans++;
            for(int i=0;i<k;i++){
                if(arr[i]==0){
                    arr.erase(arr.begin()+i);
                }
            }
        }
        cout<<ans<<endl;
    }
return 0;
}