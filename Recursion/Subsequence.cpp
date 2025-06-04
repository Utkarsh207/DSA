#include<iostream>
#include<vector>
using namespace std;
void subsequence(int arr[] , int n , vector<int>temp , vector<vector<int> > &ans , int idx){
    // Base Case
    if(idx == n){
        ans.push_back(temp);
        return;
    }
    // No taking that element
    subsequence(arr , n , temp , ans  , idx+1);

    // Yes Taking that element
    temp.push_back(arr[idx]);
    subsequence(arr , n , temp , ans  , idx+1);

}
int main(){
    int arr[] = {1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>temp;
    vector<vector<int> >ans;
    int index = 0;
    subsequence(arr , n , temp , ans , index);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
