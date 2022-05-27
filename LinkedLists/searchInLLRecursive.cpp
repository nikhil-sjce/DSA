bool search(Node *head, int key){
    if(head == 0)
        return false;
    if(head->data == key)
        return true;
    search(head->next, key);
}