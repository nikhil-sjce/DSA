class Solution{
    public:
    vector<long long> leftSmallerIndex(long long arr[], int n){
        vector<long long>v;
        stack<pair<long long,long long>>s;
        for(long long i=0;i<n;i++){
            if(s.empty()){
                v.push_back(-1);
                s.push({arr[i], i});
            }else if(s.top().first < arr[i]){
                v.push_back(s.top().second);
                s.push({arr[i], i});
            }else{
                while(!s.empty() && s.top().first >= arr[i])
                    s.pop();
                if(s.empty()){
                    v.push_back(-1);
                    s.push({arr[i], i});
                }else if(s.top().first < arr[i]){
                    v.push_back(s.top().second);
                    s.push({arr[i], i});
                }
            }
        }
        return v;
    }
    vector<long long> rightSmallerIndex(long long arr[], int n){
        vector<long long>v;
        stack<pair<long long,long long>>s;
        for(long long i = n-1 ;i>=0;i--){
            if(s.empty()){
                v.push_back(n);
                s.push({arr[i], i});
            }else if(s.top().first < arr[i]){
                v.push_back(s.top().second);
                s.push({arr[i], i});
            }else{
                while(!s.empty() && s.top().first >= arr[i])
                    s.pop();
                if(s.empty()){
                    v.push_back(n);
                    s.push({arr[i], i});
                }else if(s.top().first < arr[i]){
                    v.push_back(s.top().second);
                    s.push({arr[i], i});
                }
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
    long long getMaxArea(long long arr[], int n){
        vector<long long>left = leftSmallerIndex(arr, n);
        vector<long long>right = rightSmallerIndex(arr, n);
        long long maxArea = INT_MIN;
        for(long long i = 0;i<n;i++){
            long long width = right[i] - left[i] - 1;
            long long height = arr[i];
            long long area = width*height;
            if(area > maxArea)
                maxArea = area;
        }
        return maxArea;
    }
};