class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>v,ans;
        unordered_map<int,int>um;
        for(int i=0;i<nums2.size();i++)
            um[nums2[i]] = i;
        for(int i = nums2.size()-1;i>=0;i--){
            if(s.empty()){
                v.push_back(-1);
                s.push(nums2[i]);
            }else if(s.top() > nums2[i]){
                v.push_back(s.top());
                s.push(nums2[i]);
            }else{
                while(!s.empty() && s.top() < nums2[i]){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(-1);
                    s.push(nums2[i]);
                }else if(s.top() > nums2[i]){
                    v.push_back(s.top());
                    s.push(nums2[i]);
                }
            }
        }
        reverse(v.begin(), v.end());
        for(int i=0;i<nums1.size();i++){
            int index = um[nums1[i]];
            ans.push_back(v[index]);
        }
        return ans;
    }
};