#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node{
    int data;
    struct Node *link;
};

Node *head;

void print(){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> link;
    }
}

void insert(int n){
    //Node *temp = (Node* ) malloc(sizeof(Node));
    Node *temp = new Node;
    temp -> data = n;
    temp -> link = 0;

    if(head == 0){
        head = temp;
    }
    else{
        Node *t = head;
        while(t -> link != 0){
            t = t -> link;
        }
        t -> link = temp;
    }
}

int main(){
    head = NULL;
    insert(34);
    insert(89);
    insert(739);
    insert(274);
    insert(288);

    print();

    return 0;
}