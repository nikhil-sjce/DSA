void display(Node *head){
    if(head == 0)
        return;
    cout<<head->data<<" ";
    display(head->data);
}