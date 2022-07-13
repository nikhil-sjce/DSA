
class Solution
{
    public:
    bool getPath(Node *root, int n, vector<Node *> &v){
        if(root == 0)
            return root;
        v.push_back(root);
        if(root->data == n)
            return true;
        bool leftTree = getPath(root->left, n, v);
        bool rightTree = getPath(root->right, n, v);
        if(leftTree || rightTree)
            return true;
        v.pop_back();
        return false;
    }
    Node* lca(Node* root ,int n1 ,int n2 ){
        if(root == 0)
            return 0;
        vector<Node *> v1,v2;
        getPath(root, n1, v1);
        getPath(root, n2, v2);
        Node *temp;
        for(int i=0;i<min(v1.size(), v2.size());i++){
            if(v1[i]->data == v2[i]->data)
                temp = v1[i];
            else
                break;
        }
        return temp;
    }
};