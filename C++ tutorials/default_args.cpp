#include<iostream>
#include<iomanip>
using namespace std;
int sum(int a, int b=4){
    return a+b;
}
int main(){
    cout<<sum(5)<<endl;
    cout<<sum(5,9)<<endl;

return 0;
}