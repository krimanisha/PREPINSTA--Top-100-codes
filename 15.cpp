//Armstrong number in a given range
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
void armstrong(int a, int b){
    for(int i=a; i<=b; i++){
        int sum=0, temp, rem, len;
        temp=i;
        len=order(i);
        while(temp!=0){
            rem=temp%10;
            sum+=pow(rem, len);
            temp/=10;
        }
        if(sum == i)
            cout<<i<<" ";
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    armstrong(a,b);
    return 0;
}