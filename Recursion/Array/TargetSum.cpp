#include<iostream>
using namespace std;
bool Find(int arr[] , int n , int idx , int target){
    // Base Case
    if(target == 0){
        return 1;
    }
    if(target < 0 || idx == n){
        return 0;
    }


    return Find(arr  , n , idx +1  , target) || Find(arr  , n , idx + 1 , target-arr[idx]);
}
int main(){
     int arr [] = {1,3,6};
     int n = sizeof(arr)/sizeof(arr[0]);
     int idx = 0;
     int target = 8;
    cout<<Find(arr , n , idx , target);
}
