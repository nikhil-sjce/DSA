class Solution {
public:
     vector<int> leftMax(vector<int>& arr, int n){
        vector<int>v;
        stack<int>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }else if(s.top() > arr[i]){
                v.push_back(s.top());
                if(s.top() < arr[i])
                    s.push(arr[i]);
            }else if(s.top() <= arr[i]){
                v.push_back(-1);
                if(s.top() < arr[i])
                    s.push(arr[i]);
            }
        }
        return v;
    }
    vector<int> rightMax(vector<int>& arr, int n){
        vector<int>v;
        stack<int>s;
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }else if(s.top() > arr[i]){
                v.push_back(s.top());
                if(s.top() < arr[i])
                    s.push(arr[i]);
            }else if(s.top() <= arr[i]){
                v.push_back(-1);
                if(s.top() < arr[i])
                    s.push(arr[i]);
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
    int trap(vector<int>& arr) {
        int n = arr.size();
        vector<int>left = leftMax(arr, n);
        vector<int>right = rightMax(arr, n);
        int rainWater = 0;
        for(int i=1;i<n-1;i++){
            if(left[i] == -1 || right[i] == -1)
                continue;
            int height = min(left[i], right[i]);
            int store = height - arr[i];
            if(store > 0)
                rainWater = rainWater + store; 
        }
        return rainWater;
    }
};