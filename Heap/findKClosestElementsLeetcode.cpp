class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pair<int,int>>maxHp;
        vector<int>v;
        for(int i=0 ; i<n ;i++){
            int diff = abs(x - arr[i]);
                maxHp.push({diff, arr[i]});
                if(maxHp.size() > k)
                    maxHp.pop();
        }
        while(!maxHp.empty()){
            v.push_back(maxHp.top().second);
            maxHp.pop();
        }
        sort(v.begin(), v.end());
        return v;
    }
};