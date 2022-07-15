// Factorial of a number
#include<bits/stdc++.h>
using namespace std;
void fact(int n){
    int f=1;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    cout<<f<<endl;

}
int main(){
    int n;
    cin>>n;
    fact(n);
}