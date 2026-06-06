#include<iostream>
using namespace std;
void printCounting(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    cout<<"counting from 1 to "<<n<<" is: ";
    printCounting(n);
    return 0;
}