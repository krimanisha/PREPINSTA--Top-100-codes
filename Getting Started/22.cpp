//Strong Number
// Strong Number is a number in which sum of the factorial of
// individual digits of the number is equal to the number itself.
// For Example: 145 
// 145 = 1! x 4! x 5! =  145

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int strong_num(int n){
    int rem, sum=0;
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        sum+=fact(rem);
        temp/=10;
    }
    return sum==n;
}

int main(){
    int n;
    cin>>n;
    if(strong_num(n)){
        cout<<"Strong number";
    }
    else{
        cout<<"Not Strong number";
    }
}