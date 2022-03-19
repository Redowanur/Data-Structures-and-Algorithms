#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int arr[MAX], front = -1, back = -1;

bool isEmpty(){
    return (front == -1 && back == -1);
}

bool isFull(){
    return (front == (back+1)%MAX);
}

void insertfront(int n){
    if(isFull()) return;
    if(isEmpty()) front = back = 0;
    else if(front == 0) front = MAX-1;
    else --front;
    arr[front] = n;
}

void insertBack(int n){
    if(isFull()) return;
    if(isEmpty()) front = back = 0;
    else back = (back+1)%MAX;
    arr[back] = n;
}

void deleteFront(){
    if(isEmpty()) return;
    else if(front == back) front = back = -1;
    else front = (front+1)%MAX;
}

void deleteBack(){
    if(isEmpty()) return;
    else if(front == back) front = back = -1;
    else if(back == 0) back = MAX-1;
    else --back;
}

void display(){
    if(isEmpty()) return;
    if(front <= back){
        for(int i = front; i <= back; i++) cout << arr[i] << " ";
    }
    else{
        int key = MAX-front;
        int count = key+back+1;
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

    for(int i = 1; i < 16; i++) insertBack(i);
    display();

    for(int i = 0; i < 4; i++) deleteBack();
    display();

    for(int i = 20; i < 35; i++) insertfront(i);
    display();

    for(int i = 0; i < 6; i++) deleteFront();
    display();

    return 0;
}