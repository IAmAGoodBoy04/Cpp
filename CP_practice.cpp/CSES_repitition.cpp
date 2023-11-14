#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

int main(){
    string s;
    int longest=1,temp=1;
    cin>>s;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            while(s[i]==s[i+1] && i<s.length()-1){
                temp++;
                i++;
            }
            if(longest<temp){
                longest=temp;
            }
            temp=1;
        }
    }
    cout<<longest<<endl;
return 0;
}