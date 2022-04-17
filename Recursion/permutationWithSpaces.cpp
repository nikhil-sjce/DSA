class Solution{
public:
    void solve(string ip, string op, vector<string> &v){
        if(ip.length() == 0){
            v.push_back(op);
            return;
        }
        string op1 = op, op2 = op;
        op1.push_back(ip[0]);
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        if(ip.length() == 0)
            solve(ip, op1, v);
        else{
            op2.push_back(' ');
            solve(ip, op2, v);
            solve(ip, op1, v);
            return;
        }
    }
    vector<string> permutation(string s){
        vector<string>v;
        solve(s, "", v);
        return v;
    }
};
