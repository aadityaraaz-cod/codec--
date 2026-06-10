#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    // here i shows index of array 
    for(int i =0; i<size; i+=2){
        if(i+1<size){
        swap(arr[i], arr[i+1]);
        }
    }
}

void printingArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}


int main(){

    int even[6]={7,5,8,4,9,2};
    int odd[5]={2,6,4,8,1};

    swapAlternate(even,6);
    swapAlternate(odd,5);

    printingArray(even,6);

    printingArray(odd,5);
}