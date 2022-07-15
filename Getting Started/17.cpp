//Find the Nth Term of the Fibonacci Series
#include<bits/stdc++.h>
using namespace std;
int fibo_nth(int n){
    if(n<=1){
        return n;
    }
    return fibo_nth(n-1) + fibo_nth(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo_nth(n);
}