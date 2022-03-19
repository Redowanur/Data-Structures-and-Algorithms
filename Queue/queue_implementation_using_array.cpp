#include <bits/stdc++.h>
#define MAX 10000
using namespace std;

int arr[MAX], front = -1, rear = -1;

bool isEmpty(){
    return (front == -1 && rear == -1);
}

bool isFull(){
    return (front == (rear+1)%MAX);
}

void push(int n){
    if(isFull()) return;
    if(isEmpty()) front = rear = 0;
    else rear = (rear+1)%MAX;
    arr[rear] = n;
}

void pop(){
    if(isEmpty()) return;
    else if(front == rear) front = rear = -1;
    else front = (front+1)%MAX;
}

int Front(){
    return arr[front];
}

void display(){
    if(isEmpty()) return;
    if(front <= rear){
        for(int i = front; i <= rear; i++) cout << arr[i] << " ";
    }
    else{
        int key = MAX-front;
        int count = key+rear+1;
        int index;

        for(int i  = 0; i < count; i++){
            if(i < key) index = (i+MAX)-key;
            else index = i-key;

            cout << arr[index] << " ";
        }
    }
    cout << endl;
}

int main(){
    
    for(int i = 1; i <= 15; i++) push(i);
    display();

    for(int i = 0; i < 5; i++) pop();
    display();

    for(int i = 20; i < 30; i++) push(i);
    display();

    for(int i = 0; i < 6; i++) pop();
    display();

    return 0;
}
