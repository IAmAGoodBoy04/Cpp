#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        int sequence_longest[2*n+1]={0};
        int sequence_longestforb[2*n+1]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int temp=1,currentnum;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                temp++;
                currentnum=a[i];
            }
            else{
                currentnum=a[i];
                if(temp>sequence_longest[currentnum]){
                    sequence_longest[currentnum]=temp;
                }
                temp=1;
                currentnum=0;
            }
        }
        currentnum=a[n-1];
        if(temp>sequence_longest[currentnum]){
                sequence_longest[currentnum]=temp;
            }
        temp=1;
        currentnum=0;
        for(int i=0;i<n-1;i++){
            if(b[i]==b[i+1]){
                temp++;
                currentnum=b[i];
            }
            else{
                currentnum=b[i];
                if(temp>sequence_longestforb[currentnum]){
                    sequence_longestforb[currentnum]=temp;
                }
                temp=1;
                currentnum=0;
            }
        }
        currentnum=b[n-1];
        if(temp>sequence_longestforb[currentnum]){
                sequence_longestforb[currentnum]=temp;
            }
        for(int i=0;i<2*n+1;i++){
            sequence_longest[i]+=sequence_longestforb[i];
        }
        int ans=0;
        for(int i=1;i<=2*n;i++){
            if(sequence_longest[i]>ans){
                ans=sequence_longest[i];
            }
        }
        if(ans==0){
            ans=1;
        }
        cout<<ans<<endl;
    }
return 0;
}