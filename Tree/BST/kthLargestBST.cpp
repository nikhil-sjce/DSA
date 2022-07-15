class Solution
{
    public:
    void solve(Node *root, int k, int &ans, int &count){
        if(root == 0)
            return;
        solve(root->right, k, ans, count);
        if(count < k){
            ans = root->data;
            count++;
        }
        solve(root->left, k, ans, count);
    }
    int kthLargest(Node *root, int k){
        int ans = -1, count = 0;
        solve(root, k, ans, count);
        if(count != k)
            return -1;
        return ans;
    }
};