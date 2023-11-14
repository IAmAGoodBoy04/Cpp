#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

template <typename T>
void merge_it(T* arr, int start, int mid, int end){
    int size_L=mid-start+2;
    int size_R=end-mid+1;
    T L[size_L];
    T R[size_R];
    L[size_L-1]=INT32_MAX;
    R[size_R-1]=INT32_MAX;
    for(int i=0;i<size_L-1;i++){
        L[i]=arr[start+i];
    }
    for(int i=0;i<size_R-1;i++){
        R[i]=arr[mid+i+1];
    }
    int k=start,l=0,r=0;
    while(k<(end+1)){
        if(L[l]<R[r]){
            arr[k]=L[l];
            l++;
            k++;
        }
        else{
            arr[k]=R[r];
            r++;
            k++;
        }
    }
}
template <typename T>
void mergesort(T* arr, int start, int end){
    if(start<end){
        int mid=(start+end)/2;
        mergesort<T>(arr,start,mid);
        mergesort<T>(arr, mid+1, end);
        merge_it<T>(arr,start,mid,end);
    }
}

int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort<float> (arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}