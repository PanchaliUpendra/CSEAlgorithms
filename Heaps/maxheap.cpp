#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[],int i,int n){
    int largest=i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if(l<n and arr[l]>arr[i]) largest=l;
    if(r<n and arr[r]>arr[largest]) largest=r;
    if(largest!=i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        maxheapify(arr,largest,n);
    }
}

int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array of values: "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n/2;i>=0;i--){
        maxheapify(arr,i,n);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
