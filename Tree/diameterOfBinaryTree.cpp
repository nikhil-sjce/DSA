class Solution {
  public:
    int solve(Node *root, int &maxi){
        if(root == 0)    
            return 0;
        int leftHeight = solve(root->left, maxi);
        int rightHeight = solve(root->right, maxi);
        maxi = max(maxi, leftHeight+rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }
    int diameter(Node* root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        return maxi+1;
    }
};