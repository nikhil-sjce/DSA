int countNodesinLoop(struct Node *head){
    Node *slow = head, *fast = head;
    int count = 0, flag = 0;
    while(fast!=0 && fast->next!=0){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        return 0;
    while(slow->next!=fast){
        slow = slow->next;
        count++;
    }
    return count+1;
}