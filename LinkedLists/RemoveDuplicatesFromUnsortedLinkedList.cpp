class Solution
{
    public:
    Node * removeDuplicates( Node *head){
        Node *temp = head, *prev = 0;
        unordered_set<int>s;
        while(temp!=0){
            if(s.find(temp->data) == s.end()){
                prev = temp;
                s.insert(temp->data);
                temp = temp->next;
            }else{
                Node *deleteNode = temp;
                prev->next = temp->next;
                temp = temp->next;
                free(deleteNode);
            }
        }
        return head;
    }
};