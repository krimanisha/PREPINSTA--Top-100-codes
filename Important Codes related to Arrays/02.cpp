//Find Smallest Element in an Array

#include<bits/stdc++.h>
using namespace std;
void smallest_element(int arr[], int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    smallest_element(arr, n);
}