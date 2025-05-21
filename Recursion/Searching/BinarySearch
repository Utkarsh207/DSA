#include<iostream>
using namespace std;
int RecursiveBS(int arr[]  , int si , int ei , int target){
    int mid =  si + (ei - si)/2;

    // Base Case 1
    if(si > ei){
        return -1;
    }

    // Base Case 2
    if(arr[mid] == target){
        return mid;
    }
    else if (arr[mid] > target){
        return RecursiveBS(arr  , si , mid - 1 , target);
    }
    else{
        return RecursiveBS(arr  , mid + 1 , ei , target);
    }
}
int main(){
    int arr[] = {3,8,11,15,20,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    int si = 0;
    int ei = n-1;
    int target = 20;
    cout<<RecursiveBS(arr , si , ei , target);
}
