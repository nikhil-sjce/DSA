class Solution{

	public:
	int perfectSum(int arr[], int n, int s){
        int t[n+1][s+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<s+1;j++){
                if(i==0)
                    t[i][j] = 0;
                if(j==0)
                    t[i][j] = 1;
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j = 1;j<s+1;j++){
                if(arr[i-1] <= j)
                    t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
                else
                    t[i][j] = t[i-1][j];
            }
        }
        return t[n][s];
	}
    int countSubsetWithDiff(int arr[], int n){
        int sum = 0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        int s = (sum + diff)/2;
        return perfectSum(arr, n, s);
    }
	  
};