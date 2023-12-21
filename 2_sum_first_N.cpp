//Print 1 to N

#include<iostream>

using namespace std;

int main()

{
    int i=1;
    int sum=0;
    int N=10;
    while(i<=N){

        
        sum = sum +i;
        i=i+1;
    }
    cout<<"Sum: "<<sum<<endl;
    
    
    return 0;
}