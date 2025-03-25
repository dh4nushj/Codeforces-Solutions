#include<iostream>
using namespace std;

int main(){
    int n, h;
    cin>>n>>h; // number of friends and the height of the fence
    int width = 0, a[20];
    for(int i =0; i<n; i++){
        cin>>a[i]; // height of the ith person
        if(a[i] > h){
            width += 2; 
        } else {
            width += 1;
        }
    }
    cout<<width<<endl;

}