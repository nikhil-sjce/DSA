class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root){
    	queue<Node *>q;
    	q.push(root);
    	vector<vector<int>>v;
    	vector<int>ans;
    	bool flag = true;
    	while(!q.empty()){
    	    int count = q.size();
    	    vector<int>temp;
    	    for(int i=0;i<count;i++){
    	        Node *current = q.front();
    	        q.pop();
    	        temp.push_back(current->data);
    	        if(current->left)
    	            q.push(current->left);
    	        if(current->right)
    	            q.push(current->right);
    	    }
    	    if(flag){
    	        v.push_back(temp);
    	        flag = !flag;
    	    }else{
    	        reverse(temp.begin(), temp.end());
    	        v.push_back(temp);
    	        flag = !flag;
    	    }
    	}
    	for(int i=0;i<v.size();i++){
    	   for(int j=0;j<v[i].size();j++){
    	       ans.push_back(v[i][j]);
    	   }
    	}
    	return ans;
    }
};