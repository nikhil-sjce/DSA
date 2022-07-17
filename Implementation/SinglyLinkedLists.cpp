#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}
int main(){
    int choice = 1;
    Node *temp, head = 0;
    while(choice){
        node *newNode = (Node *)malloc(sizeof(Node));
        cout<<"Enter the data of the Node"<<endl;
        cin>>(newNode->data);
        newNode->next = 0;
        if(head == 0){
            temp = newNode;
            head = newNode;
        }else{
            temp->next = newNode;
            temp = temp->next;
        }
        cout<<"Press 1 to enter new data else 0 to exit"<<endl;
        cin>>choice;
    }
    temp = head;
    while(temp!=0){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}