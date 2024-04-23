
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//insertion method one
void methodone(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}



int main() {
    int n;
    cin>>n;//enter the size of an array;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];//enter the elements of an array
    methodone(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    

    return 0;
}
