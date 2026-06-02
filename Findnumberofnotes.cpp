#include<iostream>
using namespace std;

int main(){
    int num,choice ;
    cout<<"Enter the number num: ";
    cin>>num; 
    cout<<"Enter the choice:"<<endl;
    cout<<"1. 100 notes"<<endl;
    cout<<"2. 50 notes"<<endl;
    cout<<"3. 20 notes"<<endl;
    cout<<"4. 10 notes"<<endl;
    cout<<"5. 1 notes"<<endl;
    cin>>choice;
    switch(choice){
        case 1: 
        cout<<"The number of 100 notes is: "<<num/100<<endl;
        break;
        case 2:
        cout<<"The number of 50 notes is: "<<num/50<<endl;
        break;
        case 3:
        cout<<"The number of 20 notes is: "<<num/20<<endl;
        break;
        case 4:cout<<"The number of 10 notes is: "<<num/10<<endl;
        break;
        case 5:
        cout<<"The number of 1 notes is: "<<num/1<<endl;
        break;
        default:
        cout<<"Invalid input"<<endl;
    }
    
    return 0;
}