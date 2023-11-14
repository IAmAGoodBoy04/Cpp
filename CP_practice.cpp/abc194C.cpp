#include<bits/stdc++.h>

#define int long long

using namespace std;

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n,temp;
    cin>>n;
    int ans=0;
    int tempans=0;
    map<int,int> arr;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[temp]++;
    }
    int len=arr.size();
    int distinctarr[len];
    map<int,int>::iterator it=arr.begin();
    map<int,int>::iterator it2;
    for(int i=0;i<len;i++){
        distinctarr[i]=it->first;
        it++;
    }
    it=arr.begin();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            it2=arr.find(distinctarr[j]);
            tempans=tempans+(distinctarr[i]-distinctarr[j])*(distinctarr[i]-distinctarr[j])*(it2->second);
        }
        tempans*=it->second;
        ans+=tempans;
        tempans=0;
        it++;
    }
    cout<<ans<<endl;

return 0;
}