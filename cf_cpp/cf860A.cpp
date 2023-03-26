#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(){
    int t,n,yes,amax,bmax;
    cin>>t;
    while(t--){
        yes=1;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        amax=a[n-1];
        bmax=b[n-1];
        for(int i=0;i<n-1;i++){
            if((a[i]>amax && b[i]>amax) ||(a[i]>amax && a[i]>bmax)){
                    yes=0;
                    break;
            }
            if((b[i]>bmax && a[i]>bmax)||(b[i]>bmax && b[i]>amax)){
                yes=0;
                break;
            }
        }
        if(yes==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    

return 0;
}