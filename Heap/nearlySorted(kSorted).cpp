class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
        priority_queue<int, vector<int>, greater<int>>minHp;
        vector<int>v;
        int i=0;
        while(i < num){
            minHp.push(arr[i]);
            if(minHp.size() > k){
                v.push_back(minHp.top());
                minHp.pop();
            }
            i++;
        }
        while(!minHp.empty()){
            v.push_back(minHp.top());
            minHp.pop();
        }
        return v;
    }
};
