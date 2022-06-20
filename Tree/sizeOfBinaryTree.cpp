int getSize(Node* node){
    if(node == 0)
        return 0;
    return 1 + getSize(node->left) + getSize(node->right);
}