#include<bits/stdc++.h>

#define ll long long

using namespace std;

int luck(int i){
    vector<int> arr;
    int temp,ans=0;
    while(i>=1){
        temp=i%10;
        i=i/10;
        arr.insert(arr.begin(),temp);
    }
    ans=*max_element(arr.begin(),arr.end())-*min_element(arr.begin(),arr.end());
    return ans;
}

int main(){
    int t,l,r;
    cin>>t;
    while(t--){
        cin>>l>>r;
        int ans=0;
        int maxluck=0,temp=0,i;
        if((r-l)>=80 && l>=10){
            for(i=l;i<=r;i++){
                if(i%100==9 || i%100==90){
                    ans=i;
                    break;
                }
            }
        }
        else if((r-l)>=90 && l<10){
            for(i=l;i<=r;i++){
                if(i%100==90){
                    ans=i;
                    break;
                }
            }
        }
        else{
            for(i=l;i<=r;i++){
                temp=luck(i);
                if(temp>=maxluck){
                    maxluck=temp;
                    ans=i;
                    if(maxluck==9){
                        break;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
return 0;
}