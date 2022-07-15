#include<bits/stdc++.h>
using namespace std;
void validPalindrome(int n){
    int rev=0;
    int rem;
    int temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==temp){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not Palindrome Number"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    validPalindrome(n);
}