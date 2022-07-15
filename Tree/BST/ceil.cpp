int findCeil(Node* root, int input) {
    if(root == 0)
        return 0;
    int ceili = -1;
    while(root!=0){
        if(root->data == input )
            return root->data;
        if(root->data < input){
            root = root->right;
        }
        else if(root->data > input){
            ceili = root->data;
            root = root->left;
        }
    }
    return ceili;
}