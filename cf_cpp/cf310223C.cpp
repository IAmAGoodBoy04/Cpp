#include<bits/stdc++.h>

using namespace std;

void removeDuplicates(int arr[], int n)
{
 
    
 
    // Initialise a set
    // to store the array values
    set<int> s;
 
    // Insert the array elements
    // into the set
    for (int i = 0; i < n; i++) {
 
        // insert into set
        s.insert(arr[i]);
    }
 
    set<int>::iterator it;
}

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
    for(int i=0;i<newlen;i++){
        if(i==0){prev=0;}
        else{prev=v[i-1];}
        if(d*(v[i]-prev-1)>c*(newlen-i)){
            ans=ans+c*newlen;
            cout<<ans<<endl;
            return;
        }
        else{
             ans=ans+d*(v[0]-1);
        }
    }
    ans=ans+c*identical;
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