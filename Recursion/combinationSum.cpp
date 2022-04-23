class Solution {
  public:
    void solve(vector<int>ip, vector<int>op, int sum, set<vector<int>> &ans, int n){
        if(n==0 || sum < 0)
            return ;
        if(sum == 0){
            sort(op.begin(), op.end());
            ans.insert(op);
            return;
        }
        vector<int>op1, op2;
        op1 = op, op2 = op;
        if(ip[n-1] <= sum){
            op1.push_back(ip[n-1]);
            solve(ip, op1, sum - ip[n-1], ans, n);
            solve(ip, op2, sum, ans, n-1);
        }
        else{
            solve(ip, op1, sum, ans, n-1);
        }
        return ;
    }
    vector<vector<int> > combinationSum(vector<int> &arr, int b) {
        // Your code here
        vector<int>op;
        set<vector<int>>s;
        int n = arr.size();
        solve(arr, op, b, s, n);
        vector<vector<int>>ans;
        for(auto x : s){
            ans.push_back(x);
        }
        return ans;
    }
};