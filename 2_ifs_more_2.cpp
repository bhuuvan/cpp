#include<iostream>

using namespace std;
int main(){

    int a =2;
    int b = a +1;
    cout<<"b: "<<b<<endl;

    if((a=3)==b){
        cout<<a<<endl;
        cout<<"if"<<endl;
    }
    else{
        cout<<a+1<<endl;
        cout<<"else"<<endl;
    }

    return 0;
}