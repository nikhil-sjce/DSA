class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v1(nums.size(), 0);
        stack<int>s;
        int n = nums.size();
         for(int i = 2*n-1;i>=0;i--){
            if(s.empty()){
                v1[i%n] = -1;
                s.push(nums[i%n]);
            }else if(s.top() > nums[i%n]){
                v1[i%n] = s.top();
                s.push(nums[i%n]);
            }else{
                while(!s.empty() && s.top() <= nums[i%n]){
                    s.pop();
                }
                if(s.empty()){
                    v1[i%n] = -1;
                    s.push(nums[i%n]);
                }else if(s.top() > nums[i%n]){
                    v1[i%n] = s.top();
                    s.push(nums[i%n]);
                }
            }
        }
        return v1;
    }
};