stack<int>s1,s2;
void enqueue(int data){
    s1.push(data);
}

void deque(){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }else{
        s2.pop();
    }
}

int front(){
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }else{
        return s2.top();
    }
}