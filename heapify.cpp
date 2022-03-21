#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i){
    int largest = i;
    int l = 2*i;
    int r = 2*i + 1;

    if(l <= n && a[largest] < a[l]) largest = l;
    if(r <= n && a[largest] < a[r]) largest = r;

    if(largest != i){
        swap(a[largest], a[i]);
        heapify(a, n, largest);
    }
}

void build_heap(int a[], int sz){
    for(int i = sz/2; i > 0; i--){
        heapify(a, sz, i);
    }
}

void print(int a[], int sz){
    for(int i = 1; i <= sz; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    build_heap(arr, n);
    print(arr, n);

    return 0;
}