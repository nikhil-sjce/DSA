class Solution {
public:
    bool isLeaf(Node *root){
        if(root->left == 0 && root->right == 0)
            return true;
        else
            return false;
    }
    void LeftBoundary(Node *root, vector<int> &boundary){
        Node *current = root->left;
        while(current){
            if(!isLeaf(current))
                boundary.push_back(current->data);
            if(current->left)
                current = current->left;
            else
                current = current->right;
        }
    }
    void RightBoundary(Node *root, vector<int> &boundary){
        Node *current = root->right;
        vector<int>temp;
        while(current){
            if(!isLeaf(current))
                temp.push_back(current->data);
            if(current->right)
                current = current->right;
            else
                current = current->left;
        }
        for(int i=temp.size()-1;i>=0;i--){
            boundary.push_back(temp[i]);
        }
    }
    void Leaf(Node *root, vector<int> &boundary){
        if(isLeaf(root)){
            boundary.push_back(root->data);
            return ;
        }
        if(root->left)
            Leaf(root->left, boundary);
        if(root->right)
            Leaf(root->right, boundary);
    }
    vector <int> boundary(Node *root){
        vector<int>boundary;
        if(root == 0)
            return boundary;
        if(!isLeaf(root)){
            boundary.push_back(root->data);
        }
        LeftBoundary(root, boundary);
        Leaf(root, boundary);
        RightBoundary(root, boundary);
        return boundary;
    }
};