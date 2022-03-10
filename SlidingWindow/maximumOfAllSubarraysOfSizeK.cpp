class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k){
        int i = 0, j = 0;
        deque<int>dq;
        vector<int>v;
        while(j<n){
            while(!dq.empty() && dq.back() < arr[j])
                dq.pop_back();
            dq.push_back(arr[j]);
            if(j-i+1 < k)
                j++;
            else if( j-i+1 == k){
                v.push_back(dq.front());
                if(arr[i] == dq.front())
                    dq.pop_front();
                i++ ; j++ ;
            }
        }
        return v;
    }
};
