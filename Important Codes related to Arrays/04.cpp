//Find Second smallest element in an Array

#include<bits/stdc++.h>
using namespace std;
void secondSmallest(int arr[], int n){
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int sec_min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]!=min && arr[i]<sec_min){
            sec_min=arr[i];
        }
    }
    cout<<sec_min;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    secondSmallest(arr,n);
}

// Alternatives:-

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int first = INT_MAX, second = INT_MAX;

    for(int i=0; i<n; i++){
       if(arr[i] < first){
            second = first;
            first = arr[i]; 
        } 
        else if(second>arr[i])
           second = arr[i];
    }

    cout<<second;
}