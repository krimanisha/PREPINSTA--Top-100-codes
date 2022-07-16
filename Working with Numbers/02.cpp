//Least Common Factor(LCM)

#include<bits/stdc++.h>
using namespace std;
void findLcm(int num1, int num2){
    int lcm;
    int max=(num1>num2)?num1:num2;
    for(int i=max; i<=num1*num2; i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    cout<<lcm<<endl;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    findLcm(num1, num2);
}

//Alternatives
//First find hcf then use lcm formula- (num1*num2)/hcf