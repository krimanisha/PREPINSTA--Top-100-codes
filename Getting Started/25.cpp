//Automorphic Number
//An Automorphic number is a special number, whose’s square
//ends with the same digits as the number itself.
//5=25

#include<bits/stdc++.h>
using namespace std;
void find_auto(int n){
    int sq=n*n;
    while(n!=0){
        if(n%10 != sq%10){
            cout<<"Not Automorphic number"<<endl;
            return;
        }
    n/=10;
    sq/=10;
    }
    cout<<"Automorphic number"<<endl;
}
int main(){
    int n;
    cin>>n;
    find_auto(n);
}