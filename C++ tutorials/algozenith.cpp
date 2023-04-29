#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long a,b;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long diff[n-1];
        for(int i=0;i<n-1;i++){
            a=b=0;
            for(int j=0;j<=i;j++){
                a+=arr[j];
            }
            for(int k=i+1;k<n;k++){
                b+=arr[k];
            }
            diff[i]=a-b;
        }
        for(int i=0;i<n;i++){
            arr[i]=abs(arr[i]);
        }
        for(int i=0;i<n-1;i++){
            diff[i]=abs(diff[i]);
        }
        map<int,int> arrmap;
        for(int i=0;i<n;i++){
            arr
        }
    }

return 0;
}