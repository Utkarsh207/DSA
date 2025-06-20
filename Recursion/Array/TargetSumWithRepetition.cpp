#include<iostream>
using namespace std;
int targetSum(int arr[] , int n , int sum , int idx){
    // Base Cases
    if(n==idx || sum < 0){
        return 0;
    }
    if(sum == 0){
        return 1;
    }


    // No condition                         //Yes Condition
    return targetSum (arr , n , sum , idx + 1) + targetSum (arr , n , sum-arr[idx] , idx) ;
}
int main(){
    int arr[] = {2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;
    int idx = 0;
    cout<<targetSum(arr , n , sum , idx);
}
