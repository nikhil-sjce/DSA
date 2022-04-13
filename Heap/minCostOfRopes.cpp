class Solution{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long, vector<long long>, greater<long long>>minHp;
        for(long long i=0;i<n;i++)
            minHp.push(arr[i]);
        long long ans = 0;
        while(minHp.size()!=1){
            long long first = minHp.top();
            minHp.pop();
            long long second = minHp.top();
            minHp.pop();
            long long newElement = first+second;
            ans = ans + newElement;
            minHp.push(newElement);
        }
        return ans;
    }
};
