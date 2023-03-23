#include<iostream>
#include<cmath>
using namespace std;
 
void solve () {
    long long int x;
    cin>>x;
    x--;
    long long int t = sqrt(x);
    long long int b = ceil(t);
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