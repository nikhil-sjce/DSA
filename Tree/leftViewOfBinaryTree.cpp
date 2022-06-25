void solve(Node *root, int level, vector<int>&v){
    if(root == 0)
        return ;
    if(level == v.size())
        v.push_back(root->data);
    if(root->left != 0)
        solve(root->left, level+1, v);
    if(root->right != 0)
        solve(root->right, level+1, v);
}
vector<int> leftView(Node *root){
   vector<int>v;
   solve(root, 0, v);
   return v;
}
