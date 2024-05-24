/******************************************************************************
Consider the searching problem:
Input: A sequence of n numbers ha1; a2; : : : ; ani stored in array AŒ1 W n� and a
value x.
Output: An index i such that x equals AŒi� or the special value NIL if x does not
appear in A.
Write pseudocode for linear search, which scans through the array from beginning to end, looking for x.
*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;//enter the size of an array
    int arr[n];
    cout<<"enter array of elements:"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    int val;
    cout<<"enter the value: ";
    cin>>val;
    //linear search algorithm
    bool value=false;
    int idx=0;
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            value=true;
            idx=i;
        }
    }
    value == true ? cout << "Value found at index " << idx << endl : cout << "Value not found" << endl;
    return 0;
}