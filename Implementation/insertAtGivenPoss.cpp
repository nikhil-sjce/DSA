Node * insertAtPos(Node *head, int poss, int data){
    int i = 1;
    Node *temp = head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    while(i < poss){
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}