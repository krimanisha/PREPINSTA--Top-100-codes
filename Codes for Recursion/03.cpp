#include<bits/stdc++.h>
using namespace std;

int largest_element(int n, int arr[]){

   int max_element = INT_MIN;

   for(int i=0; i<n; i++){
      max_element = max(arr[i], max_element);
   }

   return max_element;
}

int main(){

   int arr[] = {10, 45, 78, 34, 67};
   int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"Largest Element is : "<<largest_element(n, arr);
}