void preorder(Node *root, vector<int>&ans){
    if(root!=0){
        ans.push_back(root->data);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
}
vector <int> preorder(Node* root){
    vector<int>ans;
    preorder(root, ans);
    return ans;
}