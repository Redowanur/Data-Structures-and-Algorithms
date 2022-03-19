#include <bits/stdc++.h>
using namespace std;

struct node{
    node *prev;
    int data;
    node *next;
};

node *front = NULL;
node *back = NULL;

bool isEmpty(){
    return (front == NULL && back == NULL);
}

void push_front(int num){
    node *temp = new node;
    temp -> data = num;
    temp -> prev = NULL;
    temp -> next = NULL;

    if(isEmpty()) front = back = temp;
    else{
        node *t = front;
        temp -> next = front;
        front = temp;
        t -> prev = temp;
    }
}

void push_back(int num){
    node *temp = new node;
    temp -> data = num;
    temp -> prev = NULL;
    temp -> next = NULL;

    if(isEmpty()) front = back = temp;
    else{
        back -> next = temp;
        temp -> prev = back;
        back = back -> next;
    }    
}

void pop_front(){
    node *t = front;
    front = front -> next;
    delete t;
}

void pop_back(){
    node *t = back;
    back = back -> prev;
    back -> next = NULL;
    t -> prev = NULL;
    delete t;
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

    for(int i = 1; i <= 200; i++) push_back(i);
    display();

    for(int i = 0; i < 20; i++) pop_front();
    display();

    for(int i = 0; i <= 50; i++) pop_back();
    display();

    for(int i = 35; i <= 300; i++) push_front(i);
    display();

    for(int i = 0; i <= 70; i++) pop_back();
    display();

    return 0;
}