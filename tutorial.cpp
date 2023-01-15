//The value of length and breadth of a rectangle from user
// check if it square or not
#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter a length";
    cin>>length;
    cout<<"enter a breadth";
    cin>>breadth;
    if(length==breadth){
        cout<<"it is a square";

    }else{
        cout<<"it is a rectangle";
    }
    return 0;



}