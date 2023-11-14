#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

void insertion_sort_rev(int n, int* arr){
    int temp,j;
    for(int i=n-2;i>=0;i--){
        j=i+1;
        temp=arr[i];
        while(j<n && arr[j]>temp){
            arr[j-1]=arr[j];
            j++;
        }
        arr[j-1]=temp;
    }
}   
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort_rev(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}