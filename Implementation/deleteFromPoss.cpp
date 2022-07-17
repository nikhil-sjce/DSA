Node *deleteFromPoss(Node *head, int poss){
    int i = 1;
    Node *temp = head, *prev = 0;
    while(i< poss - 1){
        prev = temp;
        temp = temp->next;        
    }
    prev->next = temp->next;
    temp->next = 0;
    free(temp);
    return head;
}