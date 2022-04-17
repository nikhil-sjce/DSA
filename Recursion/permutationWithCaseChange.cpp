#include <bits/stdc++.h>
using namespace std;
void solve(string ip, string op, vector<string> &ans){
        if(ip.length() == 0){
            ans.push_back(op);
            return;
        }
        string op1 = op, op2 = op;
        if(ip[0] >= 'a' && ip[0] <= 'z'){
            op1.push_back(ip[0]);
            op2.push_back(ip[0] - 32);
        }else if(ip[0] >= 'A' && ip[0] <= 'Z'){
            op1.push_back(ip[0] + 32);
            op2.push_back(ip[0]);
        }
        ip.erase(ip.begin());
        solve(ip, op1, ans);
        solve(ip, op2, ans);
        return;
    }
int main(){
	vector<string>v;
    solve("aB", "", v);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
