#include<iostream>
using namespace std;
int power(int a, int b){
    int result= 1;
    for(int i =1; i<=b; i++){
        result= result*a;
    }
    return result;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:";
cin>>a>>b;
int result = power(a,b);
cout<<"Power is = "<<result<<endl;
return 0;
}