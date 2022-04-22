// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
        void solve(vector<int>ip, vector<int>op, int m, vector<vector<int>> &ans){
            if(ip.size() == 0){
                ans.push_back(op);
                return;
            }
                vector<int>op1, op2;
                op1 = op;
                op2 = op;
                op1.push_back(ip.front());
                ip.erase(ip.begin());
                solve(ip, op1, m, ans);
                solve(ip, op2, m, ans);
                return;
        }
		int DivisibleByM(vector<int>nums, int m){
		    vector<int>op;
		    vector<vector<int>>ans;
		    solve(nums, op, m, ans);
		    ans.erase(ans.end());
		    int count = 0;
		    for(int i=0;i<ans.size();i++){
		        int sum = 0;
		        for(int j=0;j<ans[i].size();j++){
		            sum = sum + ans[i][j];
		        }
		        if(sum%m == 0){
		            count = 1;
		            break;
		        }
		    }
		    if(count == 0)
		        return 0;
		    else
		        return 1;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends