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

void insertAtTheBeginning(int val){
    Node *temp = (Node* ) malloc(sizeof(Node));
    temp -> data = val;
    temp -> next = head;
    temp -> prev = NULL;
    head = temp;
}

int main(){
    head = NULL;
    insertAtTheBeginning(24);
    insertAtTheBeginning(78);
    insertAtTheBeginning(934);
    insertAtTheBeginning(991);

    print();

    return 0;
}