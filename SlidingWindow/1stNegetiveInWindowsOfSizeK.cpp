vector<long long> printFirstNegativeInteger(long long int a[], long long int n, long long int k) {
    queue<long long int>q;
    vector<long long int>ans;
    long long int i = 0, j = 0;
    while(j < n){
        if(a[j] < 0)
            q.push(a[j]);
        if(j-i+1 < k)
            j++;
        else if(j-i+1 == k){
            if(q.size() == 0)
                ans.push_back(0);
            else
                ans.push_back(q.front());
            i++ ; j++ ;
            if(a[i-1] == q.front())
                q.pop();
        }
    }
    return ans;
 }