class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node *root, int level, vector<int>&v){
        if(root == 0)
            return ;
        if(level == v.size())
            v.push_back(root->data);
        if(root->right != 0)
            solve(root->right, level+1, v);
        if(root->left != 0)
            solve(root->left, level+1, v);
    }
    vector<int> rightView(Node *root){
        vector<int>v;
        solve(root, 0, v);
        return v;
    }
};