#include<iostream>
#include<cmath>
using namespace std;
 
void solve () {
    long long int x;
    cin>>x;
    x--;
    long long int t = sqrtl(x);
    cout<<t<<endl;
  
}
 
int main () {
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}