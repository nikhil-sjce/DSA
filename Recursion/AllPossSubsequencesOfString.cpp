class Solution {
  public:
    void solve(string ip, string op, vector<string> &v){
        if(ip.length() == 0){
            v.push_back(op);
            return ;
        }
        string op1 = op, op2 = op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip, op1, v);
        solve(ip, op2, v);
        return;
    }
    vector<string> allPossibleSubsequences(string s) {
        vector<string>v;
        solve(s, "", v);
        return v; 
    }
};
