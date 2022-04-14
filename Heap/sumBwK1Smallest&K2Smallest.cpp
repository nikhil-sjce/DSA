class Solution{
    public:
    long long kthSmallest(long long a[], long long n, long long k){
        priority_queue<long long>maxHp;
        long long i =0;
        while(i<n){
            maxHp.push(a[i]);
            if(maxHp.size() > k)
                maxHp.pop();
            i++;
        }
        return maxHp.top();
    }
    long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2){
        long long first = kthSmallest(a, n, k1);
        long long second = kthSmallest(a, n, k2);
        long long sum = 0;
        for(long long i=0;i<n;i++){
            if(a[i] > first && a[i] < second)
                sum = sum + a[i];
        }
        return sum;
    }
};