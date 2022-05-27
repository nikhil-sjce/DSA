int getNthFromLast(Node *head, int n){
        Node *ptr1 = head, *ptr2 = head;
        while(n && ptr1!=0){
            ptr1 = ptr1->next;
            n--;
        }
        if(ptr1==0 && n>0)
            return -1;
        while(ptr1!=0){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr2->data;
}
