#include <iostream>
#include <vector>
using namespace std;
void subsequence(int arr[],int sum  , int idx, int n)
{
    // Base Case
    if (n == idx)
    {
        cout<<sum<<endl;
        return;
    }

    // No Case Condition
    subsequence(arr, sum  , idx + 1, n);

    // Yes Case Condition
    sum+=arr[idx];
    subsequence(arr,sum ,  idx + 1, n);
}
int main()
{
    int arr[] = {3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int idx = 0;
    subsequence(arr,  sum, idx, n);

}
