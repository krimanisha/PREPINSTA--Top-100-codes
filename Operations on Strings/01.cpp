//Check whether a character is a vowel or consonant

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonants"<<endl;
    }
    return 0;
}