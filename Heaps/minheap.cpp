/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void minheapify(int arr[],int i,int n){
    int smallest=i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if(l<n and arr[l]<arr[i]) smallest=l;
    if(r<n and arr[r]<arr[smallest]) smallest=r;
    if(smallest!=i){
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
        minheapify(arr,smallest,n);
    }
}

int main() {
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the array of values: "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n/2;i>=0;i--){
        minheapify(arr,i,n);
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    
    return 0;
}