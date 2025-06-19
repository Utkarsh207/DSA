#include<iostream>
using namespace std;
int PerfectSum(int arr[] , int n , int sum , int idx){
    // Base Case
    if( n == idx ){
        return sum==0;
    }
    

    return PerfectSum(arr , n , sum , idx+1 ) + PerfectSum(arr , n , sum-arr[idx] , idx+1 ); 

}
int main(){
    int arr[] = {1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 1;
    int idx = 0;
    cout<<PerfectSum(arr , n , sum ,idx);
}
