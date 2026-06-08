#include<iostream>
#include<climits>
using namespace std;
int getMax(int num[], int n){
    int maxi = INT_MIN ;
    for(int i=0; i<n; i++){

        // we also write like this
        maxi = max(maxi,num[i]);

      //  if(num[i]>max){
        //    max= num[i];
        //}
    }
    return maxi;
}
int getMin(int num[],int n){
    int mini = INT_MAX;
    for(int i =0; i<n; i++){
        
     // we also write like this
     mini = min(mini,num[i]);

       // if(num[i]<min){
         //   min= num[i];
        //}
    }
    return mini ;
}

int main(){
    int size;
    cout<<"Entre the size ";
    cin>>size;
    int num[100];

    //taking input in array
     cout<<"Entre the number ";
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"Maximum number is "<<getMax(num,size)<<endl;
    cout<<"Minimum number is "<<getMin(num,size)<<endl;
    return 0;
}