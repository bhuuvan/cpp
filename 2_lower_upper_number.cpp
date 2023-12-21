#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;

    cout<<"Your entered character is "<<ch<<endl;

        if(ch>=65&&ch<=90)
            cout<<endl<<"You entered an uppercase character";
        else if(ch>=48&&ch<=57)
            cout<<endl<<"You entered a digit";
        else if(ch>=97&&ch<=122)
            cout<<endl<<"You entered a lowercase character";
        else
            cout<<endl<<"You entered a special character";
    return 0;
}