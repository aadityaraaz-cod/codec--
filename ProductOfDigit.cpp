#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int product = 1;
    while(n!=0){
        int digit = n%10;
        product = product*digit;
        n = n/10;
    }
    cout<<"The product of the digits is: "<<product<<endl;
    return 0;
}