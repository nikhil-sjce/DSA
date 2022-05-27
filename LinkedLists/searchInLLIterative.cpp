int search(Node *head, int k){
    Node *temp = head;
    while(teamp!=0){
        if(temp->data == k)
            return k;
        temp = temp->next;
    }
    return -1;
}