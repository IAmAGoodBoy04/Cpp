#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

void solve(int n){
    int count=0,flag;
    int arr[45];
    while(1){
        n=n/2;
        if(n%2==0){
            n=n+1;
            flag=1;
        }
        else{
            flag=2;
        }
        count++;
        if(count>40){
            cout<<"-1"<<endl;
            break;
            return;
        }
        arr[count-1]=flag;
        if(n==1){
            break;
        }
    }
    cout<<count<<endl;
    for(int i=count-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==0){
            cout<<"-1"<<endl;
        }
        else{
            solve(n);
        }
    }

return 0;
}