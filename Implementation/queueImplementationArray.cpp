#define MAX 100;

int front = -1;
int rear = -1;

bool isEmpty(){
    if(rear == -1 && front == -1)
        return true;
    else
        return false;
}

void enqueue(int data){
    if((rear + 1)%MAX == front)
        return;
    if(isEmpty()){
        rear = 0;
        front = 0;
        arr[rear] = data;
    }
    else{
        rear = (rear + 1)%MAX;
        arr[rear] = data;
    }
}

void deque(){
    if(isEmpty())
        return;
    if(rear == front){
        rear = -1;
        front = -1;
    }else{
        front = (front + 1)%MAX;
    }
}

int front(){
    return arr[front];
}