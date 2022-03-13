#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node{
    Node *prev;
    int data;
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

void deleteNode(int pos){
    Node *temp = head;

    if(pos == 1){
        head = head -> next;
        free(temp);
    }
    else{
        for(int i = 1; i < pos; ++i){
            temp = temp -> next;
        }
        temp -> prev -> next = temp -> next;
        free(temp);
    }
}

int main(){
    head = NULL;
    insert(5);
    insert(9);
    insert(78);
    insert(32);
    insert(21);
    insert(73018);
    insert(1);

    print();
    deleteNode(3);
    print();
    deleteNode(5);
    print();
    deleteNode(1);
    print();

    return 0;
}