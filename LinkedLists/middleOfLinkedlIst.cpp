class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head){
        Node *slow = head, *fast = head;
        while(fast !=0 && fast->next!=0){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};