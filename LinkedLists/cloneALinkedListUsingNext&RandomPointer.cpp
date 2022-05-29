class Solution
{
    public:
    Node *copyList(Node *head) {
        //STEP:1
        Node *current = head , *prev;
        while(current!=0){
            Node *next = current->next;
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = current->data;
            current->next = newNode;
            newNode->next = next;
            current = next;
        }
        //STEP;2
        current = head;
        while(current!=0 && current->next!=0){
            current->next->arb = (current->arb!=0)?current->arb->next:0;
            current = current->next->next;
        }
        //STEP:3
        current = head;
        Node *new_head = 0 , *new_tail = 0;
        while(current!=0 && current->next!=0){
            if(new_head==0){
                new_head = current->next;
                new_tail = new_head;
                Node *temp = current->next->next;
                current->next = temp;
                new_head->next = 0;
                
            }
            else{
                new_tail->next = current->next;
                Node *temp = current->next->next;
                current->next = temp;
                new_tail = new_tail->next;
                new_tail->next = 0;
            }
            current = current->next;
        }
        return new_head;
    }
};