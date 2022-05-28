class Solution
{
    public:
    void rearrangeEvenOdd(Node *head){
       Node *evenHead = 0, *oddHead = 0, *evenTail = 0, *oddTail = 0, *temp = head;
       int count = 1;
       while(temp!=0){
           if(count%2 == 0){
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
               count++;
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
               count++;
           }
       }
      if(evenHead!=0 && oddHead!=0)
            oddTail->next = evenHead;
    }
};