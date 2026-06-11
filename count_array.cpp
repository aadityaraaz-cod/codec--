#include<iostream>
using namespace std;

void printingarray(int arr[],int size){
    for(int i=0; i<size; i++){
        int count=1;
        bool alreadyCounted= false;

        for(int j=0; j<i; j++){
            if(arr[j]==arr[i]){
                alreadyCounted= true;
                break;
            }
        }
        if(alreadyCounted) continue;

        for (int j= i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
           
        }
         cout<< arr[i]<<" appears "<< count <<" times "<<endl;

    }
}
int main(){

    int n;
    cout<<" Entre the size of element ";
    cin>>n;
    int box[n];
    cout<<" Enter the element ";
    for(int i =0; i<n; i++){
        cin>>box[i];
    }
    printingarray(box,n);
    return 0;
}