//Harshard Number
//a positive integer that is divisible by the sum of the digits of the integer.
//For Example : 153
//Sum of digits = 1 + 5 + 3 = 9
//153 is divisible by 9 so 153 is a Harshad Number.

#include<bits/stdc++.h>
using namespace std;

void isHarshard(int n){
    int sum=0, rem=1;
    int temp=n;
    while(temp!=0){
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }    
    if(n%sum==0){
        cout<<"Harshard Number"<<endl;
    }
    else{
        cout<<"Not Harshard Number"<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    isHarshard(n);
}