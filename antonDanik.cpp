#include<iostream>
using namespace std;

int main(){
    int games;
    cin>> games;
    string s;
    cin>> s;
    int a = 0,d = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'A'){
            a +=1;
        }
        if(s[i] == 'D'){
            d += 1;
        }
    }
    if(a>d){
        cout<<"Anton";
    } else if (d>a){
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }
}