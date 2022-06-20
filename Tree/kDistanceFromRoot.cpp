int c = 0;
void answer(Node *root, int k, vector<int> &ans, int c){
    if(root != 0){
        if(c == k)
            ans.push_back(root->data);
        answer(root->left, k, ans, c+1);
        answer(root->right, k, ans, c+1);
    }
}
vector<int> Kdistance(struct Node *root, int k){
    vector<int>ans;
    int c = 0;
    answer(root, k, ans, c);
    return ans;
}