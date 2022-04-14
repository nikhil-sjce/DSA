class Solution{
    public:
    int solve(vector<int> &v, int k, int index){
        if(v.size() == 1)
            return v[0];
        index = (index + k)%v.size();
        v.erase(v.begin()+index);
        solve(v, k, index);
    }
    int josephus(int n, int k)
    {
        vector<int>v;
        for(int i=0;i<n;i++)
            v.push_back(i+1);
        return solve(v, k-1, 0);
    }
};