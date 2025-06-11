#include<iostream>
#include<vector>
using namespace std;

void SubsetSum(int arr[], int n, int idx, int sum, vector<int>& ans){
    if(idx == n){
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "=> Sum = " << sum << endl;
        return;
    }

    // Not included
    SubsetSum(arr, n, idx + 1, sum, ans);

    // Included
    ans.push_back(arr[idx]);
    SubsetSum(arr, n, idx + 1, sum + arr[idx], ans);
    ans.pop_back(); // backtrack
}

int main(){
    int arr[] = {3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;
    SubsetSum(arr, n, 0, 0, ans);
}
