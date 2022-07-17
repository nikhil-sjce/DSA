Node * deleteFromEnd(Node *head){
    if(head == 0)
        return head;
    if(head->next ==0){
        free(head);
        return 0;
    }
    Node *temp = head, *prev = 0;
    while(temp->next!=0){
        prev = temp;
        temp = temp->next;
    }
    prev->next = 0;
    free(temp);
    return head;
}