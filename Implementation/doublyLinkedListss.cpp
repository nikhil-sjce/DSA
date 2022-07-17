#include<bits/sdtc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}
int main(){
    int choice = 1;
    Node *temp = 0, *head = 0;
    while(choice){
        Node *newNode = (Node *)malloc(sizeof(Node));
        cout<<"Enter the data"<<endl;
        cin>>newNode->data;
        newNode->next = 0;
        newNode->prev = 0;
        if(head == 0){
            temp = newNode;
            head = newNode;
        }else{
            temp->next = nextNode;
            newNode->prev = temp;
            temp = newNode;
        }
        cout<<"Enter 1 for entering another element else enter 0"<<endl;
        cin>>choice;
    }
    temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}