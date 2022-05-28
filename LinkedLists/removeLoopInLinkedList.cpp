class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head){
       Node *slow = head, *fast = head;
        while(fast!=0 && fast->next!=0){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        if(slow!=fast && slow!=head)
            return;
        else if(slow == head){
            while(slow->next!=head)
                slow = slow->next;
            slow->next = 0;
            return;
        }
        else if(slow == fast){
            slow = head;
            while(slow->next!=fast->next){
                slow = slow->next;
                fast = fast->next;
            }
            fast->next = 0;
            return;
        }
    }
};