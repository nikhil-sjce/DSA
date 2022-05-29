bool areIdentical(struct Node *head1, struct Node *head2){
    Node *temp1 = head1, *temp2 = head2;
    while(temp1!=0 && temp2!=0){
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }else{
            return false;
        }
    }
    if( (temp1!=0 && temp2==0) || (temp2!=0 && temp1==0))
        return false;
    else
        return true;
}