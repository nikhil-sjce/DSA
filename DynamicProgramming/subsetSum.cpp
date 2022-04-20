//RECURSION
class Solution{   
public:
    bool solution(vector<int>arr, int n, int sum){
        if(n==0)
            return 0;
        if(sum==0)
            return 1;
        if(arr[n-1] <= sum)
            return solution(arr, n-1, sum-arr[n-1]) || solution(arr, n-1, sum);
        else
            return solution(arr, n-1, sum);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        return solution(arr, n, sum);
    }
};
//MEMOIZATION
class Solution{   
public:
    int t[101][10001];
    bool solution(vector<int> &arr, int n, int sum){
        if(n==0 && sum!=0)
            return false;
        if(sum==0)
            return true;
        if(t[n][sum]!=-1)
            return t[n][sum];
        if(arr[n-1] <= sum)
            return t[n][sum] = (solution(arr, n-1, sum-arr[n-1]) || solution(arr, n-1, sum));
        else
            return t[n][sum] = solution(arr, n-1, sum);
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        memset(t, -1, sizeof(t));
        return solution(arr, n, sum);
    }
};
//DYANAMIC PROGRAMMING
class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int t[arr.size()+1][sum+1];
        for(int i=0;i<arr.size()+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    t[i][j] = 0;
                if(j==0)
                    t[i][j] = 1;
            }
        }
        for(int i=1;i<arr.size()+1;i++){
            for(int j=1;j<sum+1;j++){
                if(arr[i-1] <= j)
                    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[arr.size()][sum];
    }
};