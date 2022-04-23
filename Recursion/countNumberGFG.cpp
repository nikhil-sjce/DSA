void solve(vector<long long>ip, vector<long long>op, vector<vector<long long>> &ans){
    if(ip.size() == 0){
            ans.push_back(op);
            return;
        }
        vector<long long>op1, op2;
        op1 = op;
        op2 = op;
        op2.push_back(ip.front());
        ip.erase(ip.begin());
        solve(ip, op1, ans);
        solve(ip, op2, ans);
        return ;
}
long long getAnswer(long long a[], long long n, long long k, long long x){
    vector<long long>ip,op;
    vector<vector<long long>>ans;
    for(long long i=0;i<n;i++)
        ip.push_back(a[i]);
    solve(ip, op, ans);
    long long count = 0;
    ans.erase(ans.begin());
     for(long long i=0;i<ans.size();i++){
        if(ans[i].size() == k){
            long long maxi = *max_element(ans[i].begin(), ans[i].end())%1000000007;
            long long mini = *min_element(ans[i].begin(), ans[i].end())%1000000007;
            if( (maxi - mini)%1000000007 <= x)
                count = (count%1000000007 + 1)%1000000007;
         }
     }
    return count;
}