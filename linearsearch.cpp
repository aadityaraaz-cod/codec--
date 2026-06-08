#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int arr[10]={1,2,6,4,2,55,-20,45,3,7};
    cout<<"Entre the key to search: ";
    int key;
    cin>>key;
     bool found = search(arr, 10, key);
     if(found){
        cout<<"Key is present in the array "<<endl;

     } else {
        cout<<"Key is not present int the arrya "<<endl;
     }
     return 0;
}