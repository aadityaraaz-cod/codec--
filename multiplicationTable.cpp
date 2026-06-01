#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    int table;
    cout<<"The multiplication table of "<<n<<"is :"<<endl;
    for(int i=1; i<=10; i++){
        table = n*i;
        cout<<n<<"x"<<i<<"="<<table<<endl;
    }

    return 0;
}