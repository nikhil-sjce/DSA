class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        queue<Node*>q;
        q.push(root);
        int answer = INT_MIN;
        while(!q.empty()){
            int current = q.size();
            if(answer < current)
                answer = current;
            for(int i=0;i<current;i++){
                Node *temp = q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        return answer;
    }
};