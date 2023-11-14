#include <bits/stdc++.h>
using namespace std;


int main() {
    int temp=0;
    vector<int> arr;
    char c=1;
    string str;
    cin>>str;
    stringstream ss(str);
    while(c!=','){
        ss>>temp;
        ss>>c;
        arr.push_back(temp);
    }
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
