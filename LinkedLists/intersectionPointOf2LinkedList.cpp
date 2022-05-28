int intersectPoint(Node* head1, Node* head2){
    if(head1 == 0 || head2 == 0)
        return -1;
    Node *temp1 = head1, *temp2 = head2;
    while(temp1 != temp2){
        if(temp1 == 0)
            temp1=head2;
        else
            temp1 = temp1->next;
        if(temp2 == 0)
            temp2 = head1;
        else
            temp2 = temp2->next;
    }
    return temp1->data;
}