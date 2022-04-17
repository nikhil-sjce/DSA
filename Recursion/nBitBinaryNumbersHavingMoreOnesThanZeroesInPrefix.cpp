class Solution{
public:	
    void solve(string op, int ones, int zeroes, int n, vector<string> &v){
        if(n == 0){
            v.push_back(op);
            return;
        }
        string op1 = op, op2 = op;
        if(ones == zeroes){
            op1.push_back('1');
            solve(op1, ones+1, zeroes, n-1, v);
        }else if(ones > zeroes){
            string op1 = op, op2 = op;
            op1.push_back('1');
            op2.push_back('0');
            solve(op1, ones+1, zeroes, n-1, v);
            solve(op2, ones, zeroes+1, n-1, v);
        }
        return;
    }
	vector<string> NBitBinary(int n){
	    vector<string>v;
	    solve("", 0, 0, n, v);
	    return v;
	}
};