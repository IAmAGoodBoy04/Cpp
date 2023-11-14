#include<bits/stdc++.h>

using namespace std;


void solve(int *arr, int n, int c, int d){
    sort(arr,arr+n);
    int ans=0,prev;
    int identical;
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    set<int>::iterator it;
    std::vector <int> v;
    v.reserve (s.size ());
    std::copy (s.begin (), s.end (), std::back_inserter (v));
    int newlen=v.size();
    identical=n-newlen;
    ans=ans+c*identical;
    for(int i=0;i<newlen;i++){
        if(i==0){
            if(d*(v[i]-1)>(c*(newlen)+d)){
                ans=ans+c*(newlen)+d;
                cout<<ans<<endl;
                return;
            }
            else{
                ans+=d*(v[i]-1);
            }
        }
        else if(d*(v[i]-v[i-1]-1)>c*(newlen-i)){
            ans=ans+c*(newlen-i);
            cout<<ans<<endl;
            return;
        }
        else{
             ans=ans+d*(v[i]-v[i-1]-1);
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t,n,c,d;
    cin>>t;
    while(t--){
        cin>>n>>c>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        solve(arr,n,c,d);
    }

return 0;
}