Node *findRightMost(Node *root){
    if(root->right == 0)
        return root;
    return findRightMost(root->right);
}
Node *helper(Node *root){
    if(root->left == 0)
        return root->right;
    else if(root->right == 0)
        return root->left;
    else{
        Node *leftNode = root->left;
        Node *rightNode = root->right;
        Node *rightMost = findRightMost(leftNode);
        rightMost->right = rightNode;
        return root->left;
    }
}
Node *deleteNode(Node *root, int x) {
    if(root == 0)
        return 0;
    if(root->data == x)
        return helper(root);
    Node *temp = root;
    while(temp != 0){
        if(temp->data < x){
            if(temp->right != NULL && temp->right->data == x){
                temp->right = helper(temp->right);
                break;
            }else{
                temp = temp->right;
            }
        }else{
            if(temp->left != NULL && temp->left->data == x){
                temp->left = helper(temp->left);
            }else{
                temp = temp->left;
            }
        }
    }
    return root;
}