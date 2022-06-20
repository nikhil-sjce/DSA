class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root == 0)
            return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return 1 + max(maxLeft, maxRight);
    }
};