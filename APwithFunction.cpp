#include<iostream>
using namespace std;
// AP given is (3*n+7) 
// find the nth term of the AP
int AP(int n){
      int term = 3*n +7;
      return term;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"The nth term of the AP is : "<<AP(n)<<endl;
    return 0;
}