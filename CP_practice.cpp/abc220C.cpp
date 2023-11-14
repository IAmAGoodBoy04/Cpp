#include<bits/stdc++.h>

#define ll long long
#define int long long
using namespace std;

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int arrsum=0,ans=0;
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
    }
    int sum=x%arrsum;
    ans=n*(x/arrsum);
    arrsum=0;
    for(int i=0;i<n;i++){
        arrsum+=arr[i];
        ans++;
        if(arrsum>sum){
            break;
        }
    }
    cout<<ans<<endl;

return 0;
}