bool getPath(Node *root, int n, vector<int> &v){
    if(root == 0)
        return false;
    v.push_back(root->data);
    if(root->data == n)
        return true;
    if(getPath(root->left) || getPath(root->right))
        return true;
    v.pop_back();
    return false;
}
vector<int> solve(Node *root, int n){
    vector<int>v;
    if(root == 0)
        return v;
    getPath(root, n, v);
    return v;
}