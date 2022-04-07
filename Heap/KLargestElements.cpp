class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k){
        priority_queue<int, vector<int>, greater<int>>minHp;
        vector<int>v;
        int i=0;
        while(i<n){
            minHp.push(arr[i]);
            if(minHp.size() > k)
                minHp.pop();
            i++;
        }
        while(!minHp.empty()){
            v.push_back(minHp.top());
            minHp.pop();
        }
        reverse(v.begin(), v.end());
        //sort(v.begin(), v.end(), greater<int>());
        return v;
    }
};