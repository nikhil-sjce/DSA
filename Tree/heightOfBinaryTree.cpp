class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        if(node == 0)
            return 0;
        return max(height(node->left), height(node->right)) + 1;
    }
};