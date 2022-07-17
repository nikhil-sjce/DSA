struct Node *{
    int data;
    Node *next;
}

struct Node *rear = 0;
struct Node *front = 0;

bool isEmpty(){
    if(rear == 0 && front == 0)
        return true;
    else
        return false;
}

void enqueue(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = 0;
    if(isEmpty()){
        rear = newNode;
        front = newNode;
    }else{
        rear->next = newNode;
        rear = newNode;
    }
}

void deque(){
    if(isEmpty()){
        return;
    }
    else if(front == rear){
        Node *temp = rear;
        rear = 0;
        front = 0;
        free(temp);
    }else{
        Node *temp = front;
        front = front->next;
        free(temp);
    }
}