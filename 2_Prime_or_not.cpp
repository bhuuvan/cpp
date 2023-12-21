#include<iostream>

using namespace std;
int main(){

    int num=0 ;
    int i =2;
    cout<<"Enter a number to heck if it is prime or not"<<endl;
    cin>>num;

    if(num<=0){
        cout<<"The number is NOT prime"<<endl;
    }
    else if(num==1){
        cout<<"The number is neither prime nor composite"<<endl;
    }
    else{
            while(i<num){
                
                if((num%i)==0){
                    cout<<"Number is not prime"<<endl;
                    
                    
                }
                else{

                    cout<<"number is prime"<<endl;
                }
                i = i+1;
            }
    }
    return 0;
}