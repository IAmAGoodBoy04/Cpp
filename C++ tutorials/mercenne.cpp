#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    long temp=0L;
        int factor=0;
        cout<<"test"<<endl;
        for(int i=2;i<=31;i++)
        {
            temp=((long)pow(2,i))-1;
            for(long j=2;j<=temp/2;j++)
            {
                if(temp%j==0)
                {
                    factor++;
                    break;
                }

            }
            if(factor==0)
            {
                cout<<temp<<"  "<<i<<endl;
            }
            factor=0;
        }

return 0;
}