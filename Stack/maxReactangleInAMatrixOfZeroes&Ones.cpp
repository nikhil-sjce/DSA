class Solution{
  public:
    vector<int> leftSmall(int arr[], int n){
        vector<int>v;
        stack<pair<int,int>>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                v.push_back(-1);
                s.push({arr[i], i});
            }else if(s.top().first < arr[i]){
                v.push_back(s.top().second);
                s.push({arr[i], i});
            }else{
                while(!s.empty() && s.top().first >= arr[i]){
                    s.pop();
                }
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
    vector<int> rightSmall(int arr[], int n){
        vector<int>v;
        stack<pair<int,int>>s;
        for(int i = n-1;i>=0;i--){
            if(s.empty()){
                v.push_back(n);
                s.push({arr[i], i});
            }else if(s.top().first < arr[i]){
                v.push_back(s.top().second);
                s.push({arr[i], i});
            }else{
                while(!s.empty() && s.top().first >= arr[i]){
                    s.pop();
                }
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
    int MAH(int arr[], int n){
        vector<int>left = leftSmall(arr, n);
        vector<int>right = rightSmall(arr, n);
        int maxArea = INT_MIN;
        for(int i=0;i<n;i++){
            int width = right[i] - left[i] - 1;
            int height = arr[i];
            int area = width*height;
            if(area > maxArea)
                maxArea = area;
        }
        return maxArea;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        int mh[m] = {0};
        for(int i=0;i<m;i++)
            mh[i] = mh[i] + M[0][i];
        int maxArea = MAH(mh, m);
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] == 0)
                    mh[j] = 0;
                else
                    mh[j] = mh[j] + M[i][j];
            }
            int area = MAH(mh, m);
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};
