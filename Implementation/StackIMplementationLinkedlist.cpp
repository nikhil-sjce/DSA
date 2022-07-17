struct Node {
    int data;
    struct Node *next;
}

struct Node *top;

void push(int data){
    Node *newnNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == 0)
        retrun;
    Node *temp = top;
    top = top->next;
    free(temp);
}

int top(){
    return top->data;
}