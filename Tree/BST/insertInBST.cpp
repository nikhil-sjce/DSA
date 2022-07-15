Node* insert(Node* root, int key) {
    if(root == 0){
        return new Node(key);
    }
    Node *temp = root;
    while(true){
        if(temp->data > key){
            if(temp->left != 0){
                temp = temp->left;
            }else{
                temp->left = new Node(key);
                break;
            }
        }else if(temp->data < key){
            if(temp->right != 0){
                temp = temp->right;
            }else{
                temp->right = new Node(key);
                break;
            }
        }else if(temp->data == key){
            break;
        }
    }
    return root;
}