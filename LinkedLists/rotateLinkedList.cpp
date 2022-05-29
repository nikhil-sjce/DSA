class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k){
        k = k-1;
        Node *newTail = head, *oldTail = head, *temp = head;
        while(temp->next!=0){
            if(k > 0){
                newTail = newTail->next;
                k--;
            }
            temp = temp->next;
        }
        if(k!=0){
            return head;
        }else{
            temp->next = head;
            head = newTail->next;
            newTail->next = 0;
            return head;
        }
    }
};