//Abundant Number
//Abundant Number is a number where the sum of its proper
//divisors is greater than the number itself.

#include<bits/stdc++.h>
using namespace std;
void isAbundant(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>n){
        cout<<"Abundant Number"<<endl;
    }
    else{
        cout<<"Not Abundant Number"<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    isAbundant(n);
    
}
