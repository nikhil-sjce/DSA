//Begining
Node* insertion(Node *head, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = 0;
    head->prev = newNode;
    head = newNode;
}

//At End
Node* insertion(Node *head, int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    Node *tail = head;
    while(temp->next!=0){
        temp = temp->next;
    }
    newNode->next = 0;
    newNode->prev = tail;
    temp->next = newNode;
    tail = newNode;
}

//At Poss
Node* insertion(Node *head, int data, int poss){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    int i = 1;
    while(i<poss-1){
        temp = temp->next;
        i++;
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
}
