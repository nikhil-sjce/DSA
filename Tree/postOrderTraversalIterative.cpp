class Solution{
    public:
    vector<int> postOrder(Node* node){
        Node *current = node, *temp;
        stack<Node *>s;
        vector<int>v;
        while(current!=0 || !s.empty()){
            if(current!=0){
                s.push(current);
                current = current->left;
            }else{
                temp = s.top()->right;
                if(temp!=0){
                    current = temp;
                }else{
                    temp = s.top();
                    s.pop();
                    v.push_back(temp->data);
                    while(!s.empty() && temp == s.top()->right){
                        temp = s.top();
                        s.pop();
                        v.push_back(temp->data);
                    }
                }
            }
        }
        return v;
    }
};