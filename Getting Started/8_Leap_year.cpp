#include<bits/stdc++.h>
using namespace std;
int main(){
    int yr;
    cin>>yr;
    if(yr%400==0){
        cout<<"Leap Year"<<endl;
    }
    else if(yr%4==0 && yr%100!=0){
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"Not Leap year"<<endl;
    }
    return 0;
}
