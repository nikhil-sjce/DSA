Node *reverse(Node *head){
    Node *current = head, *nextNode = head, *prev = 0;
    while(nextNode!=0){
        nextNode = nextNode->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    head = prev;
    return head;
}