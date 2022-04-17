class Solution {
public:
    void solve(string ip, string op, vector<string> &v){
        if(ip.length() == 0){
            v.push_back(op);
            return;
        }
        string op1 = op, op2 = op;
        if(ip[0] >= '0' && ip[0] <= '9'){
            op1.push_back(ip[0]);
            ip.erase(ip.begin());
            solve(ip, op1, v);
        }
        else if(ip[0] >= 'a' && ip[0] <= 'z'){
            op1.push_back(ip[0]);
            op2.push_back(ip[0] - 32);
            ip.erase(ip.begin());
            solve(ip, op1, v);
            solve(ip, op2, v);
        }else if(ip[0] >= 'A' && ip[0] <= 'Z'){
            op1.push_back(ip[0] + 32);
            op2.push_back(ip[0]);
            ip.erase(ip.begin());
            solve(ip, op1, v);
            solve(ip, op2, v);
        }
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>v;
        solve(s, "", v);
        return v;
    }
};