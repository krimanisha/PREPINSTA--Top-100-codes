//Highest Common Factor(HCF) of two numbers
//also called as GCD
//HCF ( Highest Common Factor ) of two numbers is the 
//largest positive integer that can divide both the numbers


#include<bits/stdc++.h>
using namespace std;
void hcf(int num1, int num2){
    int hcf=1;
    //for loop in the iteration of i between [1, min(num1,num2)]
    for(int i=1; i<=num1 || i<=num2; i++){
        if(num1%i==0 && num2%i==0)
            hcf=i;
    }
    cout<<hcf<<endl;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    hcf(num1, num2);

}