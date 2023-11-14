/*
ID: shubhan16
TASK: ride
LANG: C++14          
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    fin>>a>>b;
    int p=1,q=1;
    for(int i=0;i<a.size();i++){
        p=(a[i]-'A'+1)*p%47;
    }
    for(int i=0;i<b.size();i++){
        q=(b[i]-'A'+1)*q%47;
    }
    if(p==q){
        fout<<"GO"<<endl;
    }
    else{
        fout<<"STAY"<<endl;
    }
    return 0;
}