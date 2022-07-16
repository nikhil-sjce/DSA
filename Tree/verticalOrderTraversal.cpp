class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root){
        map<int, map<int, vector<int>>>nodes;
        queue<pair<Node*, pair<int, int>>>q;
        q.push({root, {0, 0}});
        while(!q.empty()){
            Node *node = q.front().first;
            int x = q.front().second.first, y = q.front().second.second;
            q.pop();
            nodes[x][y].push_back(node->data);
            if(node->left)
                q.push({node->left, {x-1, y+1}});
            if(node->right)
                q.push({node->right, {x+1, y+1}});
        }
        vector<int>ans;
        for(auto x : nodes){
            for(auto y : x.second){
                for(auto z : y.second){
                    ans.push_back(z);
                }
            }
        }
        return ans;
    }
};
