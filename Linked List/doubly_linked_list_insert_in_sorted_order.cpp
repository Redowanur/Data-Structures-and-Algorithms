#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
};

Node *head;

void print(){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insert(int n){
    Node *temp = (Node* ) malloc(sizeof(Node));
    temp -> data = n;
    temp -> prev = NULL;
    temp -> next = NULL;


    if(head == NULL) head = temp;
    else{
        Node *temp1 = head;

        while(temp1 -> next != NULL){
            temp1 = temp1 -> next;
        }
        temp1 -> next = temp;
        temp -> prev = temp1;
    }
}

void insertInSortedOrder(int value){
    Node *temp = new Node();
    temp -> data = value;
    temp -> prev = NULL;
    temp -> next = NULL;
    
    if(head == NULL){
        head = temp;
    }
    else if(head -> data >= temp -> data){
        temp -> next = head;
        temp -> next -> prev = temp;
        head = temp;
    }
    else{
        Node *t = head;

        while(t -> next != NULL && t -> next -> data < temp -> data){
            t = t -> next;
        }
        
        temp -> next = t -> next;
        if(t -> next != NULL) temp -> next -> prev = temp;

        t -> next = temp;
        temp -> prev = t;
    }
}

int main(){
    head = NULL;
    // insert(2);
    // insert(7);
    // insert(9);
    // insert(12);
    // insert(19);
    insertInSortedOrder(15);
    insertInSortedOrder(2);
    insertInSortedOrder(7);
    insertInSortedOrder(15);
    insertInSortedOrder(11);

    print();

    return 0;
}