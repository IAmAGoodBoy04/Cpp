#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(){
    int t,m,n,player;
    cin>>t;
    while(t--){
        int player_last_day[50001]={0};
        cin>>m;
        int yes=1;
        int ansarr[m];
        for(int i=0;i<m;i++){
            cin>>n;
            for(int j=0;j<n;j++){
                cin>>player;
                player_last_day[player]=i+1;
            }
        }
        int count;
        for(int i=0;i<m;i++){
            count=0;
            for(int j=0;j<50001;j++){
                if(player_last_day[j]==i+1){
                    ansarr[i]=j;
                    count=1;
                    break;
                }
            }
            if(count==0){
                yes=0;
                break;
            }

        }
        if(yes==0){
            cout<<"-1"<<endl;
        }
        else{
            for(int i=0;i<m;i++){
                cout<<ansarr[i]<<" ";
            }
            cout<<endl;
        }
    }

return 0;
}