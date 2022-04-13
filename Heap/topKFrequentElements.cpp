class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int, int>um;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minHp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
            um[nums[i]]++;
        for(auto x : um){
            minHp.push({x.second, x.first});
            if(minHp.size() > k)
                minHp.pop();
        }
        while(!minHp.empty()){
            ans.push_back(minHp.top().second);
            minHp.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};