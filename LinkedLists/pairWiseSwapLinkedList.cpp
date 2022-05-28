class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) {
        Node *prev = 0, *current = head, *nextnode = head;
        int count = 0;
        while(nextnode!=0 && count < 2){
            nextnode = nextnode->next;
            current->next = prev;
            prev = current;
            current = nextnode;
            count++;
        }
        if(nextnode!=0){
            Node *reff_head = pairWiseSwap(nextnode);
            head->next = reff_head;
        }
        return prev;
    }
};