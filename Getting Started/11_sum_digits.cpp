#include<bits/stdc++.h>
using namespace std;
void sumOfDigit(int n){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    cout<<sum<<endl;
}
int main(){
    int n;
    cin>>n;
    sumOfDigit(n);
}