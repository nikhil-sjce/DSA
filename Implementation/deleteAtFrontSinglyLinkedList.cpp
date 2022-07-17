Node * deleteAtFront(Node * head){
    if(head == 0)
        return head;
    Node *temp = head;
    head = head->next;
    free(temp);
}