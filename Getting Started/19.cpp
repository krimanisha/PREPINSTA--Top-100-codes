//Power of a number
#include<bits/stdc++.h>
using namespace std;
void power(int n, int p){
    long long int val=1;
    for(int i=0; i<p; i++){
        val*=n;
    }
    cout<<val<<endl;

}
int main(){
    int n,p;
    cin>>n>>p;
    power(n,p);
}