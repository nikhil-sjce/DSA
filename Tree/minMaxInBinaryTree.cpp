class Solution{
public:
    int findMax(Node *root){
        if(root == 0)
            return INT_MIN;
        return max(max(findMax(root->left), findMax(root->right)), root->data);
    }
    int findMin(Node *root){
        if(root == 0)
            return INT_MAX;
        return min(min(findMin(root->left), findMin(root->right)), root->data);
    }
};