//Counting the number of even and odd elements in an array

#include<bits/stdc++.h>
using namespace std;
void countOddEven(int arr[], int n){
    int countOdd=0, countEven=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    cout<<"Even Count "<<countEven<<endl;
    cout<<"Odd Count "<<countOdd<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    countOddEven(arr, n);
}