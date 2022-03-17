class Solution{
  public:
    int findCeil(vector<long long> v, long long n, long long x){
        int start = 0, end = n-1, answer = INT_MAX, answerIndex = -1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(v[mid] == x)
                return mid;
            else if(v[mid] > x){
                if(v[mid] > answer){
                    answer = v[mid];
                    answerIndex = mid;
                }
                end = mid - 1;
            }
            else if(v[mid] < x){
                start = mid + 1;
            }
        }
        return answerIndex;
    }
};