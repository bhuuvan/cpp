//a is greater than b?


#include<iostream>
using namespace std;

int main(){
int a , b;
cin>>a>>b;

cout<<"Your entered numbers are "<<a<<" & "<<b<<endl;
if (a>b){
    cout<<"a greater than b"<<endl;

}
else if (b>a){
    cout<<"b greater than a"<<endl;
}
else {
    cout<<"a and b are equal"<<endl;
}


return 0;
}
