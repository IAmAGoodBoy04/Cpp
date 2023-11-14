#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int representable=0;
    int root=sqrt(n);
    int index;
    for(int i=2;i<=root;i++){
        index=2;
        while(exp(i,index)<=n){
            representable++;
        }
    }
    int ans=n-representable;
    cout<<ans<<endl;
return 0;
}