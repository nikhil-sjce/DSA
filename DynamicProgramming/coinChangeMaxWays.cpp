class Solution {
  public:
    long long int count(int s[], int m, int n) {
        long long int t[m+1][n+1];
        for(long long int i=0;i<m+1;i++){
            for(long long int j = 0;j<n+1;j++){
                if(i==0)
                    t[i][j] = 0;
                if(j==0)
                    t[i][j] = 1;
            }
        }
        for(long long int i=1;i<m+1;i++){
            for(long long int j=1;j<n+1;j++){
                if(s[i-1] <= j)
                    t[i][j] = t[i][j-s[i-1]] + t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[m][n];
    }
};