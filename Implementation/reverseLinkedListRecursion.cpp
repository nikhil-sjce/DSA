void reverse(Node *p){
    if(p->next == 0){
        head = p;
        return;
    }
    reverse(p->next);
    Node *temp;
    temp = p->next;
    temp->next = p;
    p->next = 0;
}