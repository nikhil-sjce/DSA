class Solution
{
    public:
    void solve(string op, int open, int close, vector<string> &v){
        if(close == 0 && open == 0){
            v.push_back(op);
            return;
        }
        if(open == 0){
            string op1 = op;
            op1.push_back(')');
            solve(op1, open, close-1, v);
        }else if(open == close){
            string op1 = op;
            op1.push_back('(');
            solve(op1, open-1, close, v);
        }else if(open < close){
            string op1 = op, op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(op1, open-1, close, v);
            solve(op2, open, close-1, v);
        }
        return;
    }
    vector<string> AllParenthesis(int n){
        vector<string>v;
        int open = n, close = n;
        string op;
        op.push_back('(');
        solve(op, open-1, close, v);
        return v;
    }
};