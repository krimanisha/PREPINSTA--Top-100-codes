//Factor of a number
#include<bits/stdc++.h>
using namespace std;
void fact(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    fact(n);
}


//This method is used when we need factors in pairs.
// #include<bits/stdc++.h>
// using namespace std;
// void fact(int n){
//     for(int i=1; i<=sqrt(n); i++){
//         if(n%i==0){
//             if(i==n/i){
//                 cout<<i<<" ";
//             }
//             else{
//                 cout<<i<<" "<<n/i<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     fact(n);
// }