#include<bits/stdc++.h>
using namespace std;
#define MAX 101;
int arr[MAX];
int top = -1;

void push(int data){
    if(top == MAX-1)
        return;
    top = top + 1;
    arr[top] = data;
}

void pop(){
    if(top == -1)
        return;
    top = top - 1;
}

int top(){
    return arr[top];
}
