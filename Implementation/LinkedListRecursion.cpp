void printReverse(Node *head){
    if(head == 0)
        return;
    printReverse(head->next);
    cout<<head->data<<endl;
}

void printForward(Node *head){
    if(head == 0)
        return ;
    cout<<head->data<<endl;
    printReverse(head->next);
}