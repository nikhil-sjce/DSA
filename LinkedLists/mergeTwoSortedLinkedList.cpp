Node* sortedMerge(Node* head1, Node* head2){
    Node *newHead = 0, *newTail = 0, *temp1 = 0, *temp2 = 0;
    if(head1==0)
        return head2;
    else if(head2 == 0)
        return head1;
    if(head1->data < head2->data){
        newHead = head1;
        newTail = head1;
        temp1 = head1;
        temp2 = head2;
    }else if(head1->data > head2->data){
        newHead = head2;
        newTail = head2;
        temp1 = head2;
        temp2 = head1;
    }else{
        newHead = head1;
        newTail = head1;
        temp1 = head1;
        temp2 = head2;
    }
    temp1 = temp1->next;
    while(temp1!=0 && temp2!=0){
        if(temp1->data < temp2->data){
            newTail->next = temp1;
            newTail = newTail->next;
            temp1 = temp1->next;
        }else if(temp1->data > temp2->data){
            newTail->next = temp2;
            newTail = newTail->next;
            temp2 = temp2->next;
        }else{
            newTail->next = temp1;
            newTail = newTail->next;
            temp1 = temp1->next;
        }
    }
    if(temp1 == 0)
        newTail->next = temp2;
    else
        newTail->next = temp1;
    return newHead;
}