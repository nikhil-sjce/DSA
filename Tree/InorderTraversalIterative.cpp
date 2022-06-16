class Solution {
public:
    vector<int> inOrder(Node* root){
        Node *current = root;
        stack<Node*>s;
        vector<int>v;
        while(current!=0 || !s.empty()){
            while(current!=0){
                s.push(current);
                current = current->left;
            }
            current = s.top();
            s.pop();
            v.push_back(current->data);
            current = current->right;
        }
        return v;
    }
};