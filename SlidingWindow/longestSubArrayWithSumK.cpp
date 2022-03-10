class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k){
        int i = 0, j = 0, sum = 0, maxArray = INT_MIN;
        unordered_map<int,int>um;
        while(j<n){
            sum = sum + a[j];
            if(sum == k){
                maxArray = j+1;
            }
            if(um.find(sum) == um.end())
                um[sum] = j;
            if(um.find(sum-k)!=um.end()){
                if(maxArray < (j-um[sum-k]))
                    maxArray = j-um[sum-k];
            }
            j++;
        }
        if(maxArray == INT_MIN)
            return 0;
        else
            return maxArray;
    } 

};