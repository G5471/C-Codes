#include<iostream>
using namespace std;
int getFactorial(int n){
    if(n<=1)
    return 1;
    return n*getFactorial(n-1);
}
int main(){
    int n;
    cout<<"enter a input"<<endl;
    cin>>n;
    cout<<"value of"<<n<<"!"<<getFactorial(n-1)<<endl;
}