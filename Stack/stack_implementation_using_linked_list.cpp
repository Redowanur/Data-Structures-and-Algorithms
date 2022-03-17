#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;

void push(int n){
    Node *temp = new Node;
    temp -> data = n;
    temp -> next = head;
    head = temp;
}

void pop(){
    if(head == NULL) return;
    
    Node *t = head;
    head = t -> next;
    delete t;
}

void print(){
    Node *t = head;

    while(t != NULL){
        cout << t -> data << " ";
        t = t -> next;
    }
    cout << endl;
}

int main(){
    head = NULL;
    push(7);
    push(25);
    push(74);
    push(19);
    push(37);
    print();

    pop();
    print();

    pop();
    print();

    push(319);
    print();

    return 0;
}