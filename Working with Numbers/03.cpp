// Greatest Common Divisor

// #include<bits/stdc++.h>
// using namespace std;
// void gcd(int num1, int num2){
//     int gcd=1;
//     for(int i=1; i<=num1||i<=num2; i++){
//         if(num1%i==0 && num2%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd<<endl;

// }
// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     gcd(num1, num2);
// }

//Euclidean Algorithm
//Euclidean Algorithm: GCD of two numbers remains constant even 
//if we subtract the smaller number from the higher number.
#include<bits/stdc++.h>
using namespace std;
void euclidean_gcd(int num1, int num2){
    while(num1!=num2){
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    cout<<num1;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    euclidean_gcd(num1, num2);
}