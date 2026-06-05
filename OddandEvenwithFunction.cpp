#include<iostream>
using namespace std;
bool isEven(int n){
    if(n%2==0){
        return true;
    } else{
        return false;
    }
}

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if (isEven(a)){
        cout<<a<<" is an even"<<endl;
        
    } else{
        cout<<a<<" is an odd"<<endl;
    }
    
    return 0;
}