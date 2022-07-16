class Solution{
    public:
    vector<int> topView(Node *root){
        vector<int>topView;
        if(root == 0)
            return topView;
        map<int, int>mp;
        queue<pair<Node *, int>>q;
        q.push({root, 0});
        while(!q.empty()){
            Node *node = q.front().first;
            int level = q.front().second;
            q.pop();
            if(mp.find(level) == mp.end())
                mp[level] = node->data;
            if(node->left)
                q.push({node->left, level-1});
            if(node->right)
                q.push({node->right, level+1});
        }
        for(auto x : mp){
            topView.push_back(x.second);
        }
        return topView;
    }

};