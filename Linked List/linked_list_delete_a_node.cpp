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

void insert(int value){
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

void deleteNode(int pos){
    if(pos == 1){
        Node *temp = head;
        head = head -> link;
        delete temp;
    }
    else{
        Node *temp1 = head;
        for(int i = 1; i < pos-1; ++i){
            temp1 = temp1 -> link;
        }
        Node *temp2 = temp1 -> link;
        temp1 -> link = temp2 -> link;
        delete temp2;
    }
}

int main(){
    head = NULL;
    insert(6);
    insert(3);
    insert(67);
    insert(76);
    insert(25);

    print();
    deleteNode(3);
    print();
    deleteNode(4);
    print();
    deleteNode(1);
    print();

    return 0;
}