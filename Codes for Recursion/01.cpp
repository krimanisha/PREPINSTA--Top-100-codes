//Power of a Number

#include<bits/stdc++.h>
using namespace std;
int power(int base, int x){
    if(x==0)
        return 1;
    return (base*power(base, x-1));
}
int main(){
    int base,x;
    cin>>base>>x;
    power(base,x);
    cout<<power(base,x);
}