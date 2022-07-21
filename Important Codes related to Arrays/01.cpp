//Find Largest element in an array

#include<bits/stdc++.h>
using namespace std;
void largest_element(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    largest_element(arr, n);
}