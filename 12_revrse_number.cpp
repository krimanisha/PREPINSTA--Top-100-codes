#include<bits/stdc++.h>
using namespace std;
void reverseNumber(int n){
    int rev=0;
    int rem;
    while(n!=0){
        rem = n%10;
        rev=rev*10+rem;
        n/=10;
    }
    cout<<rev<<endl;

}
int main(){
    int n;
    cin>>n;
    reverseNumber(n);
}