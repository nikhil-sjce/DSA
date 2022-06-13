class Solution
{
    public:
    struct Node* reverse(struct Node *head){
        Node *current = head, *prev = 0, *nextNode = head;
        while(nextNode!=0){
            nextNode = nextNode->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        head = prev;
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second){
        if(first==0 && second!=0)
            return second;
        else if(second==0 && first!=0)
            return first;
        else if(first==0 && second==0)
            return 0;
        first = reverse(first);
        second = reverse(second);
        int carry = 0, sum = 0;
        Node *temp1 = first, *temp2 = second, *newHead = 0, *newTail = 0;
        while(temp1!=0 && temp2!=0){
            sum = carry + (temp1->data + temp2->data);
            if(sum >= 10){
                carry = sum%10;
                sum = sum/10;
                int temp = carry;
                carry = sum;
                sum = temp;
            }else{
                carry = 0;
            }
            struct Node *newNode = (Node*)malloc(sizeof(Node));
            newNode->data = sum;
            if(newHead == 0){
                newHead = newNode;
                newTail = newNode;
                newTail->next = 0;
            }else{
                newTail->next = newNode;
                newTail = newTail->next;
                newTail->next = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1 == 0 && temp2!=0){
            while(temp2!=0){
                sum = carry + temp2->data;
                if(sum >= 10){
                    carry = sum%10;
                    sum = sum/10;
                    int temp = carry;
                    carry = sum;
                    sum = temp;
                }else{
                    carry = 0;
                }
                struct Node *newNode = (Node*)malloc(sizeof(Node));
                newNode->data = sum;
                newTail->next = newNode;
                newTail = newTail->next;
                newTail->next = 0;
                temp2 = temp2->next;
            }
        }else if(temp2 == 0 && temp1!=0){
            while(temp1!=0){
                sum = carry + temp1->data;
                if(sum >= 10){
                    carry = sum%10;
                    sum = sum/10;
                    int temp = carry;
                    carry = sum;
                    sum = temp;
                }else{
                    carry = 0;
                }
                struct Node *newNode = (Node*)malloc(sizeof(Node));
                newNode->data = sum;
                newTail->next = newNode;
                newTail = newTail->next;
                newTail->next = 0;
                temp1 = temp1->next;
            }
        }else{
            if(carry!=0){
                struct Node *newNode = (Node*)malloc(sizeof(Node));
                newNode->data = carry;
                newTail->next = newNode;
                newTail = newTail->next;
                newTail->next = 0;
            }
            return reverse(newHead);
        }
        if(carry!=0){
                struct Node *newNode = (Node*)malloc(sizeof(Node));
                newNode->data = carry;
                newTail->next = newNode;
                newTail = newTail->next;
                newTail->next = 0;
            }
        return reverse(newHead);
    }
};