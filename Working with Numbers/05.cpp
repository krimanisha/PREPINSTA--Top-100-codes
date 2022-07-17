//Octal to Decimal Conversion

#include<bits/stdc++.h>
using namespace std;
void octToDec(long long n){
    int dec=0, i=0, base=8;
    while(n!=0){
        int rem=n%10;
        dec+=rem*pow(base,i);
        n/=10;
        i++;
    }
    cout<<dec<<endl;
}
int main(){
    long long n;
    cin>>n;
    octToDec(n);
}