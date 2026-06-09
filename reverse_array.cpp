#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
 void printingarray(int num[], int n){
    for(int i = 0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
 }
 int main (){
    int arrA[6]={9,8,7,6,5,4};
    int arrB[7]={1,2,3,4,5,6,7};
     reverse(arrA,6);
     reverse(arrB,7);

     printingarray(arrA,6); 
     
     printingarray(arrB,7);

     return 0;

    
 }
