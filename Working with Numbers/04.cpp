//Binary to Decimal Conversion
#include<bits/stdc++.h>
using namespace std;
void binary_to_decimal(long long n){
    float i=0,dec=0;
    while(n!=0){
        int rem=n%10;
        dec+=rem*pow(2,i);
        n/=10;
        i++;
    }
    cout<<dec<<endl;
}
int main(){
    long long n;
    cin>>n;
    binary_to_decimal(n);
}