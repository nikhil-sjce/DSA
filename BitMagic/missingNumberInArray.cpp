class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int xori = 0;
        for(int i=0;i<=n;i++)
            xori = xori^i;
        for(auto x : array)
            xori = xori ^ x;
        return xori;
    }
};