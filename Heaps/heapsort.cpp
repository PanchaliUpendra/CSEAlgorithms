/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[],int n,int i){
    int l = (2*i)+1;
    int r = (2*i)+2;
    int smallest=i;
    if(l>=0 and l<n and arr[l]<arr[smallest]){
        smallest=l;
    }
    if(r>=0 and r<n and arr[r]<arr[smallest]){
        smallest=r;
    }
    if(smallest!=i){
        int temp=arr[i];
        arr[i]=arr[smallest];
        arr[smallest]=temp;
        heapify(arr,n,smallest);
    }
    
}

int main() {
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements : "<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    cout<<"here is the heap tree: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"lets sort the array : "<<endl;
    vector<int> ety;
    for(int i=n-1;i>=0;i--){
        ety.push_back(arr[0]);
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        heapify(arr,i,0);
    }
    for(int i=0;i<n;i++) cout<<ety[i]<<" ";

    return 0;
}
