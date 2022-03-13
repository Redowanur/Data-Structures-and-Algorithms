#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct Node{
    char data;
    Node *link;
};

Node *head;

void print(){
    Node *temp = head;

    while(temp != 0){
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    cout << endl;
}

void insert(char str){
    Node *temp = (Node* ) malloc(sizeof(Node));
    temp -> data = str;
    temp -> link = head;
    head = temp;
}

int main(){
    head = 0;
    insert('g');
    insert('u');
    insert('r');
    insert('s');

    print();

    return 0;
}