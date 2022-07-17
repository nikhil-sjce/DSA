//Begining
Node *deletionBeg(Node *head){
    Node *temp = head;
    head = head->next;
    head->prev = 0;
    free(temp);
}

// from Poss
Node *deletionBeg(Node *head, int poss){
    Node *temp = head;
    int i = 1;
    while(i<poss){
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev temp->prev;
    free(temp);
}
