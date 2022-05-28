class Solution{
public:
    Node* divide(int N, Node *head){
        Node *evenHead = 0, *oddHead = 0, *evenTail = 0, *oddTail = 0, *temp = head;
        while(temp!=0){
            if(temp->data%2 == 0){
                if(evenHead == 0){
                    evenHead = temp;
                    evenTail = temp;
                    temp = temp->next;
                    evenTail->next = 0;
                }else{
                    evenTail->next = temp;
                    evenTail = evenTail->next;
                    temp = temp->next;
                    evenTail->next = 0;
                }
            }else{
                if(oddHead == 0){
                    oddHead = temp;
                    oddTail = temp;
                    temp = temp->next;
                    oddTail->next = 0;
                }else{
                    oddTail->next = temp;
                    oddTail = oddTail->next;
                    temp = temp->next;
                    oddTail->next = 0;
                }
            }
        }
        if(oddHead!=0 && evenHead!=0)
            evenTail->next = oddHead;
        else if(oddHead == 0)
            return evenHead;
        else if(evenHead == 0)
            return oddHead;
        return evenHead;
    }
};