#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a value to check if it is pos or neg"<<endl;
    cin>>a;
    cout<<"Your entered number:"<<a<<endl;

    if(a>0){
        cout<<"Your entered number is positive"<<endl;
    }
    else{
        cout<<"Your entered number is negative"<<endl;
    }
}