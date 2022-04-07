class Solution {
  public:
    vector<int> kthLargest(int k, int arr[], int n) {
        priority_queue<int, vector<int>, greater<int>>minHp;
        vector<int>v;
        int i = 0;
        while(i<n){
            minHp.push(arr[i]);
            if(minHp.size() < k)
                v.push_back(-1);
            else if(minHp.size() == k){
                v.push_back(minHp.top());
            }
            else if(minHp.size() > k){
                minHp.pop();
                v.push_back(minHp.top());
            }
            i++;
        }
        return v;
    }
};