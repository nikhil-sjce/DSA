class Solution
{
    public:
    Node *prev = 0;
    void flatten(Node *root){
        // reverse post order
        if(root == 0)
            return ;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = 0;
        prev = root;
    }
};