#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    // cout<<n*(n+1)/2<<endl;  using formula method
    return 0;
}
