class Solution{
    public:
    vector<int> preOrder(Node* root){
        Node *current = root;
        stack<Node *>s;
        vector<int>v;
        while(current!=0 || !s.empty()){
            while(current!=0){
                s.push(current);
                v.push_back(current->data);                
                current = current->left;
            }
            current = s.top();
            s.pop();
            current = current->right;
        }
        return v;
    }
};