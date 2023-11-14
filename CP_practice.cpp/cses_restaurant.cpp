#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    int in,out;
    set<int> s1;
    set<int> s2;
    set<int>::iterator it1;
    set<int>::iterator it2;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>in>>out;
        s1.insert(in);
        s2.insert(out);
    }
    s1.insert(INT32_MAX);
    it1=s1.begin();
    it2=s2.begin();
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        if((*it1)<=(*it2)){
            arr[i]=(*it1);
            it1++;
        }
        else{
            arr[i]=-(*it2);
            it2++;
        }
    }
    int max=0,temp=0;
    for(int i=0;i<2*n;i++){
        if(arr[i]>=0){
            temp++;
        }
        else{
            temp--;
        }
        if(temp>max){
            max=temp;
        }
    }
    cout<<max<<endl;
return 0;
}