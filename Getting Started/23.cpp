//Perfect Number
//A perfect number is a number in which the sum of the proper positive 
//divisors of the number is equal to the number itself.
//For Example: 28
//Divisors : 1 + 2 + 4 + 7 + 14 = 28

#include<bits/stdc++.h>
using namespace std;
void find_perfect(int n){
    int sum=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Perfect Number"<<endl;
    }
    else{
        cout<<"Not Perfect Number"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    find_perfect(n);

}
