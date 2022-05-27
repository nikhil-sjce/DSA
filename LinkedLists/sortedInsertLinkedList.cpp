class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        struct Node *newNode = (Node*)malloc(sizeof(Node));
        newNode->data = data;
        if(head == 0){
            head = newNode;
            return head;
        }
        if(head->data >= data){
            newNode->next = head;
            head = newNode;
            return head;
        }
        Node *temp = head;
        while(temp->next!=0){
            if(data <= temp->next->data){
                newNode->next = temp->next;
                temp->next = newNode;
                return head;
            }
            temp = temp->next;
        }
        if(temp->data <= data){
            temp->next = newNode;
            newNode->next = 0;
            return head;
        }
    }
};