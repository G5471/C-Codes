#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<=j;k++){
                cout<<array[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}