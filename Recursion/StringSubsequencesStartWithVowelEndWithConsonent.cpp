class Solution {
  public:
  bool isValid(string op){
        if( (op.length() >=2) && (op[0] == 'a' || op[0] == 'e' || op[0] == 'i' || op[0] == 'o' || op[0] == 'u') && 
              !(op[op.length()-1] == 'a' || op[op.length()-1] == 'e' || op[op.length()-1] == 'i' || op[op.length()-1] == 'o' || op[op.length()-1] == 'u')
        )
            return true;
        else
            return false;
  }
    void solve(string ip, string op, set<string> &st){
        if(ip.length() == 0){
            if(isValid(op))
                st.insert(op);
            return;
        }
        string op1=op,op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin());
        solve(ip, op1, st);
        solve(ip, op2, st);
        return;
    }
    set<string> allPossibleSubsequences(string s) {
        set<string>st;
        solve(s, "", st);
        return st;
    }
};
