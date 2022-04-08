class compare{
        public :
        // Understand comparator wrt top of priorityQueue
            bool operator()(pair<int,int>p1, pair<int,int>p2){
                if(p1.first > p2.first)
                    return false;
                else if(p1.first == p2.first){
                    if(p1.second > p2.second)
                        return true;
                    else
                        return false;
                }
                else
                    return true;
            }
    };


class Solution{   
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare>maxHp;
        vector<int>v;
        for(int i=0 ; i<n ;i++){
            int diff = abs(x - arr[i]);
            if(diff == 0)
                continue;
            else{
                maxHp.push({diff, arr[i]});
                if(maxHp.size() > k)
                    maxHp.pop();
            }
        }
        while(!maxHp.empty()){
            v.push_back(maxHp.top().second);
            maxHp.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};