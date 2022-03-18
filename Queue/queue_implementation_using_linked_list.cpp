#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *front = NULL;
node *rear = NULL;

bool isEmpty(){
    return (front == NULL && rear == NULL);
}

void enqueue(int value){
    node *t = new node;
    t -> data = value;
    t -> next = NULL;
    if(isEmpty()){
        rear = t;
        front = rear;
        return;
    }
    rear -> next = t;
    rear = t;
}

void dequeue(){
    if(isEmpty()) return;
    if(front == rear){
        front = rear = NULL;
        return;
    }
    node *t = front;
    front = front -> next;
    delete t;
}

void Front(){
    if(rear == NULL) return;
    cout << rear -> data << endl;
}

void display(){
    node *t = front;

    while(t != NULL){
        cout << t -> data << " ";
        t = t -> next;
    }

    cout << endl;
}

int main(){
    
    for(int i = 1; i < 100; i+=2) enqueue(i);
    display();
    Front();

    for(int i = 1; i <= 30; i++) dequeue();
    display();
    Front();

    return 0;
}