class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int solve(Node *root){
        if(root == 0)
            return 0;
        int leftHeight = solve(root->left);
        int rightHeight = solve(root->right);
        if(leftHeight == -1 || rightHeight == -1)
            return -1;
        if(abs(leftHeight - rightHeight) > 1)
            return -1;
        return max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(Node *root){
        if(solve(root) == -1)
            return false;
        else
            return true;
    }
};
