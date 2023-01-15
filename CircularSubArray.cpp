#include<iostream>
#include<climits>
using namespace std;
int kadanes(int arr[],int n){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(currentSum,maxSum);
    }
    return maxSum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapSum;
    int nonWrapSum;
    nonWrapSum=kadanes(arr,n);
    int totalSum=0;
    for(int i=0;i<n;i++){
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapSum=totalSum+kadanes(arr,n);
    cout<<wrapSum,nonWrapSum;
    return 0;
}