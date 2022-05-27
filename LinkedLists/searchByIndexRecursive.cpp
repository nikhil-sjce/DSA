int GetNth(struct node* head, int index){
    if(head == 0)
        return -1;
    if(index == 1)
        return head->data;
    GetNth(head->next, index-1);
}
