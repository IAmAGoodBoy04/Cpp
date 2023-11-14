#include<bits/stdc++.h>

#define ll long long

using namespace std;

int solve(int n, int m){
    int ans=0;
    int noof2=0;
    int temp=n;
    while(temp< m){
        temp=temp*2;
        noof2++;
    }
    int diffper2=pow(2,noof2);
    int nominus=0;
    while(temp>m){
        temp-=diffper2;
        if(temp>=m)
        nominus++;
        else{
            temp+=diffper2;
            if(diffper2>1)
            diffper2=diffper2/2;
        }
    }
    ans+=nominus;
    ans+=noof2;
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int ans=0;
    if(m<=n){
        ans=n-m;
    }
    else{
        ans=solve(n,m);
    }
    cout<<ans<<endl;
return 0;
}