#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int ans=0;
    int current=1;
    for(int i=0;i<m;i++){
        if(arr[i]>=current){
            ans+=arr[i]-current;
            current=arr[i];
        }
        else{
            ans+=arr[i]+n-current;
            current=arr[i];
        }
    }
    cout<<ans<<endl;
return 0;
}