//RECURSIVE
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        if(n==1 || n==2)
            return 1;
        return nthFibonacci(n-1) + nthFibonacci(n-2);
    }
};
//MEMOIZATION
class Solution {
  public:
    int t[1001];
    long long int solve(long long int n){
        if(n==1 || n==2)
            return 1;
        if(t[n]!=-1)
            return t[n]%1000000007;
        return t[n] = ( solve(n-1)%1000000007 + solve(n-2)%1000000007 )%1000000007;
    }
    long long int nthFibonacci(long long int n){
        memset(t, -1, sizeof(t));
        return solve(n)%1000000007;
    }
};
//DYANAMIC PROGRAMMING
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        int t[n+1];
        for(int i=1;i<n+1;i++){
            if(i==1 || i==2)
                t[i] = 1;
        }
        for(int i=3;i<n+1;i++){
            t[i] = ( t[i-1]%1000000007 + t[i-2]%1000000007 )%1000000007;
        }
        return t[n]%1000000007;
    }
};