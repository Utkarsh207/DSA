#include<iostream>
#include<vector>
using namespace std;
void subSeq(string str , int idx , vector<string> &ans, string & temp, int n ){
    // Base Case
    if(n==idx){
        ans.push_back(temp);
        return;
    }
    // Not included Case
    subSeq(str , idx+1 , ans , temp , n);

    // Included Case
    temp.push_back(str[idx]);
    subSeq(str , idx+1 , ans , temp , n);
    temp.pop_back();

}
using namespace std;
int main(){
    string str = "abc";
    int n = str.length();
    int idx = 0;
    vector<string>ans;
    string temp;
    subSeq(str , idx , ans , temp , n);

    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
}
