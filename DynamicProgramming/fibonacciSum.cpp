class Solution{
public:
    long long int fibSum(long long int n){
        long long t[n+1], sum = 0;
        for(int i=1;i<n+1;i++){
            if(i==1 || i==2){
                t[i] = 1;
                sum = (sum%1000000007 + t[i]%1000000007)%1000000007;
            }
        }
        for(int i=3;i<n+1;i++){
            t[i] = (t[i-1]%1000000007 + t[i-2]%1000000007)%1000000007;
            sum = (sum%1000000007 + t[i]%1000000007)%1000000007;
        }
        return sum;
    }
};