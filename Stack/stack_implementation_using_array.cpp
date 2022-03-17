#include <bits/stdc++.h>
using namespace std;

int arr[10000], Top = -1;

void push(int x){
    ++Top;
    arr[Top] = x;
}

void pop(){
    --Top;
}

int top(){
    return arr[Top];
}

bool isEmpty(){
    if(Top == -1) return true;
    return false;
}

void print(){
    for(int i = 0; i <= Top; i++) cout << arr[i] << " ";
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
    cout << "top: " << top() << endl;
    pop();
    print();
    cout << "top: " << top() << endl;

    if(isEmpty()) cout << "yes\n";
    else cout << "no\n";

    return 0;
}