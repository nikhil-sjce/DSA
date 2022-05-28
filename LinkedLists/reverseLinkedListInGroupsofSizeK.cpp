class Solution
{
    public:
    struct node *reverse (struct node *head, int k){
        node *prev = 0, *current = head, *nextnode = head;
        int c = 0;
        while(nextnode!=0 && c<k){
            nextnode = nextnode->next;
            current->next = prev;
            prev = current;
            current = nextnode;
            c++;
        }
        if(nextnode!=0){
            node *refHead = reverse(nextnode, k);
            head->next = refHead;
        }
        return prev;
    }
};