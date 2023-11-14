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
    sort(arr,arr+n);
    int ans=n*(n-1)/2;
    int equal=1;
    for(int i=0;i<n-1;i++){
        equal=1;
        while(arr[i]==arr[i+1] && i<n-1){
            equal++;
            i++;
        }
        ans-=(equal*(equal-1)/2);
    }
    cout<<ans<<endl;
    
return 0;
}