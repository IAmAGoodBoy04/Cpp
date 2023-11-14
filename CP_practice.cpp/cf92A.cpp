#include<bits/stdc++.h>

#define ll long long

using namespace std;

int solve(int w, int h){
    if((w+h)%2==1){
        return 1;
    }
    if(w%2==0 && h%2==0){
        return 1;
    }
    if(w%2==1 && h%2==1){
        return 0;
    }

}
int main(){
    int t,w,h,ans;
    cin>>t;
    while(t--){
        cin>>w>>h;
        ans=solve(w,h);
        if(ans==1){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}