class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        if(root == 0)
            return 0;
        int minLeft = minDepth(root->left);
        int minRight = minDepth(root->right);
        if(minLeft == 0 || minRight == 0)
            return 1 + max(minLeft, minRight);
        return 1 + min(minLeft, minRight);
    }
};
