class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node){
        queue<Node *>q;
        q.push(node);
        vector<int>v;
        while(!q.empty()){
            Node *current = q.front();
            q.pop();
            v.push_back(current->data);
            if(current->left != 0)
                q.push(current->left);
            if(current->right !=0)
                q.push(current->right);
        }
        return v;
    }
};
