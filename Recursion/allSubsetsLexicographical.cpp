
class Solution
{
    public:
    void solve(vector<int>ip, vector<int>op, vector<vector<int>> &ans){
        if(ip.size() == 0){
            ans.push_back(op);
            return;
        }
        vector<int>op1, op2;
        op1 = op;
        op2 = op;
        op2.push_back(ip.front());
        ip.erase(ip.begin());
        solve(ip, op1, ans);
        solve(ip, op2, ans);
        return;
    }
    vector<vector<int> > subsets(vector<int>& A){
        vector<vector<int>>v;
        vector<int>B;
        solve(A, B, v);
        sort(v.begin(), v.end());
        return v;
    }
};
