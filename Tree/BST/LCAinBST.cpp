Node* LCA(Node *root, int n1, int n2){
    if(root == 0)
        return 0;
    while(root!=0){
        if((n1>root->data && n2<root->data) || (n1<root->data && n2>root->data))
            return root;
        else if(n1>root->data && n2>root->data)
            root = root->right;
        else if(n1<root->data && n2<root->data)
            root = root->left;
        else
            return root;
    }
}