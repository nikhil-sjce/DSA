vector<vector<int>> levelOrder(Node* node){
    queue<Node *>q;
    vector<vector<int>>lo;
    q.push(node);
    while(!q.empty()){
        int count = q.size();
        vector<int>v;
        for(int i=0;i<count;i++){
            Node *current = q.front();
            q.pop();
            v.push_back(current->data);
            if(current->left !=0 )
                q.push(current->left);
            if(current->right != 0)
                q.push(current->right);
        } 
        lo.push_back(v);
    }
    return lo;
}
