#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node{
    int data;
    struct Node *link;
};

Node *head;

void print(){
    Node *temp;
    temp = head;

    while(temp != 0){
        cout << temp -> data << endl;
        temp = temp -> link;
    }
}

int main(){
    head = 0;
    head = (Node*) malloc(sizeof(Node));
    head -> data = 332;
    
    head -> link = (Node*) malloc(sizeof(Node));
    head -> link -> data = 486;

    head -> link -> link = (Node*) malloc(sizeof(Node));
    head -> link -> link -> data = 276;

    head -> link -> link -> link = (Node*) malloc(sizeof(Node));
    head -> link -> link -> link -> data = 371;

    head -> link -> link -> link -> link = 0;

    print();
    return 0;
}