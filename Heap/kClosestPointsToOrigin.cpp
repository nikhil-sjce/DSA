class Solution {
public:
    int tupleSquare(int a, int b){
        return (a*a + b*b);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>maxHp;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++){
            maxHp.push({tupleSquare(points[i][0],points[i][1]),{points[i][0],points[i][1]}});
            if(maxHp.size() > k)
                maxHp.pop();
        }
        while(!maxHp.empty()){
            vector<int>temp;
            temp.push_back(maxHp.top().second.first);
            temp.push_back(maxHp.top().second.second);
            ans.push_back(temp);
            maxHp.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};