Node* startingNode(struct Node *head){
    Node *slow = head, *fast = head;
    int flag = 0;
    while(fast!=0 && fast->next!=0){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return NULL;
    slow = head;
    while(slow!=fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}