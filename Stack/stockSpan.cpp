class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector<int> leftGreaterIndex(int arr[], int n){
        vector<int>v;
        stack<pair<int, int>>s;
        for(int i=0;i<n;i++){
            if(s.empty()){
                v.push_back(-1);
                s.push({arr[i], i});
            }else if(s.top().first > arr[i]){
                v.push_back(s.top().second);
                s.push({arr[i], i});
            }else{
                while(!s.empty() && s.top().first <= arr[i])
                    s.pop();
                if(s.empty()){
                    v.push_back(-1);
                    s.push({arr[i], i});
                }else if(s.top().first > arr[i]){
                    v.push_back(s.top().second);
                    s.push({arr[i], i});
                }
            }
        }
        return v;
    }
    vector <int> calculateSpan(int price[], int n){
        vector<int>leftIndex = leftGreaterIndex(price, n);
        vector<int>ans;
        for(int i=0;i<n;i++)
            ans.push_back( (i - leftIndex[i]) );
        return ans;
    }
};