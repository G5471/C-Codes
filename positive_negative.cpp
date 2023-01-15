#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if(num>0){
        cout<<"num"<<"positive";
    }
    else if(num<0){
        cout<<"num"<<"negative";
    }
    return 0;
}