#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    if(n<11){
        cout<<0<<endl;
        return 0;
    }
    int ans=0;
    int nodigits=0;
    int temp=n;
    while(temp>0){
        temp/=10;
        nodigits++;
    }
    if(nodigits%2==1){
        ans=(int)pow(10,nodigits/2)-1;
    }
    else{
        int left,right;
        right=n%(int)pow(10,nodigits/2);
        left=n/(int)pow(10,nodigits/2);
        if(left<=right){
            ans=left;
        }
        else{
            ans=left-1;
        }
    }

    cout<<ans<<endl;
    
return 0;
}