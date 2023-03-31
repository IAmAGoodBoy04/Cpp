#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(){
    int t,n,yes;
    cin>>t;
    while(t--){
        yes=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]--;
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(i==arr[j]){
                    yes=1;
                    break;
                }
            }
        }
        if(yes==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

return 0;
}