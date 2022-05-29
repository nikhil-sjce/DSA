class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node *head){
        Node *prev = 0, *current = head, *nextnode = head;
        while(nextnode!=0){
            nextnode = nextnode->next;
            current->next = prev;
            prev = current;
            current = nextnode;
        }
        head = prev;
        return head;
    }
    Node *middle(Node *head){
        Node *slow = head, *fast = head;
        while(fast->next!=0 && fast->next->next!=0){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(Node *head){
        Node *middleNode = middle(head);
        Node *reverseNode = reverse(middleNode->next);
        middleNode->next = reverseNode;
        Node *current = head;
        while(reverseNode!=0){
            if(current->data != reverseNode->data)
                return false;
            current = current->next;
            reverseNode = reverseNode->next;
        }
        return true;
    }
};