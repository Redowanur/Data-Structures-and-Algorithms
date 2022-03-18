#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int arr[MAX], top = -1;

void push(int x){
    if(top >= MAX-1) cout << "Stack overflow\n";
    else arr[++top] = x;
}

void pop(){
    if(top < 0) cout << "Stack underflow\n";
    else --top;
}

int peek(){
    return arr[top];
}

bool isEmpty(){
    if(top < 0) return true;
    return false;
}

void print(){
    for(int i = 0; i <= top; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    push(8);
    push(57);
    push(19);
    push(43);
    print();
    pop();
    print();
    cout << "peek: " << peek() << endl;
    pop();
    print();
    cout << "peek: " << peek() << endl;

    pop();
    if(isEmpty()) cout << "Stack is empty.\n";
    else cout << "Stack is not empty.\n";
    
    pop();
    if(isEmpty()) cout << "Stack is empty.\n";
    else cout << "Stack is not empty.\n";

    return 0;
}