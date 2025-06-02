#include<iostream>
using namespace std;
int partiton(int arr[] , int start , int end){
    int pos = start;
    for(int i=start; i<=end; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i] , arr[pos]);
            pos++;
        }

    }
    return pos - 1;
}
void quickSort(int arr[] , int start , int end ){
    // Base Case 
    if(start>=end){
        return;
    }
    int pivot = partiton(arr , start , end);

    // left side
    quickSort(arr , start , pivot-1);
    quickSort(arr , pivot+1 , end);

}
int main(){
    int arr[] = {6,2,5,1,4,2,3};
      quickSort(arr, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
}

    
