void reverseDLL(Node *head){
    struct Node *current = head, *nextNode;
    while(current!=0){
        nextNode = current->next;
        current->next = current->prev;
        current->prev = nextNode;
        current = nextNode;
    }
    current = head;
    head = tail;
    tail = current;
}