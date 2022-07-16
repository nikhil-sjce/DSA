class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
    int twoSum(vector<int> &arr, int k){
        int i = 0, j = arr.size()-1;
        while(j>=i){
            if( (arr[i] + arr[j]) == k)
                return 1;
            else if( (arr[i] + arr[j]) < k )
                i++;
            else
                j--;
        }
        return 0;
    }
    void inorderTraversal(Node *root, vector<int> &inorder){
        if(root == 0)
            return ;
        inorderTraversal(root->left, inorder);
        inorder.push_back(root->data);
        inorderTraversal(root->right, inorder);
    }
    int isPairPresent(struct Node *root, int target){
        vector<int>inorder;
        if(root == 0)
            return 0;
        inorderTraversal(root, inorder);
        int targetSum = twoSum(inorder, target);
        return targetSum;
    }
};