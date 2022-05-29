class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head){
        int zeroes = 0, ones = 0, twos = 0;
        Node *temp = head;
        while(temp!=0){
            if(temp->data == 0)
                zeroes++;
            else if(temp->data == 1)
                ones++;
            else
                twos++;
            temp = temp->next;
        }
        temp = head;
        while(zeroes--){
            temp->data = 0;
            temp = temp->next;
        }
        while(ones--){
            temp->data = 1;
            temp = temp->next;
        }
        while(twos--){
            temp->data = 2;
            temp = temp->next;
        }
        return head;
    }
};