//Calculate the sum of elements in an array

#include<bits/stdc++.h>
using namespace std;
void sumElements(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sumElements(arr,n);
}
