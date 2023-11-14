#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2==1){
            cout<<0;
            for(int i=0;i<n/2;i++){
                cout<<"10";
            }
            cout<<endl;
            continue;
        }
        else{
            cout<<"10";
            for(int i=0;i<(n/2)-1;i++){
                cout<<"01";
            }
            cout<<endl;
        }
    }

return 0;
}