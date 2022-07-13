#include<bits/stdc++.h>
using namespace std;
int order(int n){
    int len=0;
    while(n){
        len++;
        n/=10;
    }
    return len;
}

int isArmstrong(int n, int len){
    int sum=0, temp, rem;
    temp=n;
    while(n>0){
        rem=n%10;
        sum+=pow(rem,len);
        n/=10;
    }
    if(temp==sum){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    
}
int main(){
    int n, len;
    cin>>n;
    len=order(n);
    isArmstrong(n, len);
}