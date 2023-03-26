#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;
void insertionsort(int *arr, int n){
    int temp,j;
    for(int i=1;i<n;i++){
        j=i;
        temp=arr[j];
        while(arr[j-1]>temp && j>0){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=temp;
    }
}
int main(){
    int n,yes=1;
    cin>>n;
    int arr[n],freq[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    int count=0,flag=arr[0],x=0,j=0;
    while(x<n){
        while(arr[x]==flag){
            count++;
            x++;
        }
        freq[j]=count;
        flag=arr[x];
        j++;
        count=0;
    }
    if(j>1){
        insertionsort(freq,j);
        for(int i=0;i<j-1;i++){
            if(freq[i]==freq[i+1]){
                yes=0;
                break;
            }
        }
    }
    if(yes==1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

return 0;
}