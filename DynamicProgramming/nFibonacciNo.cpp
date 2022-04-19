class Solution
{
    public:
    vector<long long> printFibb(int n) {
        vector<long long>ans;
        long long t[n+1];
        for(int i=1;i<n+1;i++){
            if(i==1 || i==2){
                t[i] = 1;
                ans.push_back(t[i]);
            }
        }
        for(int i=3;i<n+1;i++){
            t[i] = t[i-1] + t[i-2];
            ans.push_back(t[i]);
        }
        return ans;
    }
};