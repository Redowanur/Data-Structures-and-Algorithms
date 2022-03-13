#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head;

void print(){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}

void insertAtTheEnd(int value){
    Node *temp = (Node* ) malloc(sizeof(Node));
    temp -> data = value;
    temp -> link = NULL;

    if(head == NULL){
        head = temp;
    }
    else{
        Node *t = head;

        while(t -> link != NULL){
            t = t -> link;
        }
        t -> link = temp;
    }
}

void insert(int value){
    Node *temp1 = (Node* ) malloc(sizeof(Node));
    temp1 -> data = value;

    if(head == NULL || temp1 -> data < head -> data){
        temp1 -> link = head;
        head = temp1;
    }
    else{
        Node *pred = head;
        Node *p = pred -> link;

        while(p != NULL && p -> data < temp1 -> data){
            pred = p;
            p = p -> link;
        }
        pred -> link = temp1;
        temp1 -> link = p;
    }
}

int main(){
    head = NULL;
    // insertAtTheEnd(15);
    // insertAtTheEnd(2);
    // insertAtTheEnd(6);
    // insertAtTheEnd(11);
    // insertAtTheEnd(49);
    // insertAtTheEnd(852);
    // insertAtTheEnd(753);

    insert(58);
    insert(5);
    insert(75);
    insert(42);
    insert(9);

    print();

    return 0;
}