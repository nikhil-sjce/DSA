// RECURSIVE APPROACH
class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n){
        if(n==0 || W==0)
            return 0;
        if(wt[n-1] <= W)
            return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
        else if(wt[n-1] > W)
            return knapSack(W, wt, val, n-1);
    }
};
//MEMOIZATION APPROACH
class Solution
{
    public:
    int t[1001][1001];
    int solve(int W, int wt[], int val[], int n){
        if(n==0 || W==0)
            return 0;
        if(t[n][W]!=-1)
            return t[n][W];
        if(wt[n-1] <= W)
            return t[n][W] = max(val[n-1] + solve(W-wt[n-1], wt, val, n-1), solve(W, wt, val, n-1));
        else if(wt[n-1] > W)
            return t[n][W] = solve(W, wt, val, n-1);
    }
    int knapSack(int W, int wt[], int val[], int n){
        memset(t, -1, sizeof(t));
        return solve(W, wt, val, n);
    }
};
//TABULATION/BOTTOM UP APPROACH
