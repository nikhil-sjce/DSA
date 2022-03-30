class Solution
{
    public:
    //Nearest Greater to Right
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long>s;
        vector<long long>v;
        for(int i = n-1;i>=0;i--){
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }else if(s.top() > arr[i]){
                v.push_back(s.top());
                s.push(arr[i]);
            }else{
                while(!s.empty() && s.top() < arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(-1);
                    s.push(arr[i]);
                }else if(s.top() > arr[i]){
                    v.push_back(s.top());
                    s.push(arr[i]);
                }
            }
        }
        reverse(v.begin(), v.end());
        return v;
    }
};