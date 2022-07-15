bool search(Node* root, int x) {
    if(root == 0)
        return 0;
    while(root!=0 && root->data != x){
        if(root->data > x)
            root = root->left;
        else if(root->data < x)
            root = root->right;
        else
            break;
    }
    return root;
}
