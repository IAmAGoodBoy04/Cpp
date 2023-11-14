#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans[n];
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }
        int start=0,end=n-1;
        for(int i=0;i<n;i++){
            ans[i]=arr[i];
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=arr[start];
                start++;
            }
            else{
                ans[i]=arr[end];
                end--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}