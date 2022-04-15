class Solution
{
    public:
    void solve(vector<int>ip, vector<int>op, set<vector<int>> &st){
        if(ip.size() == 0){
            //sort(op.begin(), op.end());
            st.insert(op);
            return;
        }
        vector<int>op1, op2;
        op1 = op;
        op2 = op;
        op2.push_back(ip.front());
        ip.erase(ip.begin());
        solve(ip, op1, st);
        solve(ip, op2, st);
        return ;
    }
    vector<vector<int> > AllSubsets(vector<int> arr, int n){
        set<vector<int>>st;
        vector<int>v;
        sort(arr.begin(), arr.end());
        solve(arr, v, st);
        vector<vector<int>>ans(st.begin(), st.end());
        return ans;
    }
};