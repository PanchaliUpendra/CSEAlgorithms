/******************************************************************************
Rewrite the I NSERTION-SORT procedure to sort into monotonically decreasing 
instead of monotonically increasing order. 
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void functionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]<key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

int main() {
    int n;
    cin>>n;//enter the size of an array
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"array of elements before sorting: "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    functionsort(arr,n);
    cout<<"array of elements after sorting: "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}