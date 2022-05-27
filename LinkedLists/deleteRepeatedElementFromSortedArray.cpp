Node *removeDuplicates(Node *head){
    Node *temp = head;
    while(temp->next!=0){
        while(temp->next!=0 && temp->data == temp->next->data){
            Node *deleteNode = temp->next;
            temp->next = deleteNode->next;
            free(deleteNode);
        }
        temp = temp->next;
        if(temp == 0)
            break;
    }
    return head;
}