class Solution {
public:
    void validParenthesis(int n , vector<string>&ans , string &temp , int left , int right){
        // Base Case
        if(left + right == 2*n){
            ans.push_back(temp);
            return;
        }

        // Left Bracket
        if(left < n){
            temp.push_back('(');
            validParenthesis( n , ans , temp , left+1 , right);
            temp.pop_back();
        }
        // Right Bracket
        if(right < left){
            temp.push_back(')');
            validParenthesis( n , ans , temp , left , right+1);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        validParenthesis(n , ans ,  temp , 0 , 0);
        return ans;
    }
};
