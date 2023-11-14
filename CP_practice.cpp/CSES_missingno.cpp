#include<iostream>
#include<iomanip>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    if(n==2){
        if(arr[0]==1){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
        return 0;
    }
    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){
        if((arr[i+1]-arr[i])>1){
            cout<<(arr[i]+1)<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
return 0;
}