#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int sz){
    for(int i = 1; i <= sz; i++) cout << arr[i] << " ";
    cout << endl;
}

void mean_heap(int *arr, int sz){
    for(int i = 2; i <= sz; i++){
        int j = i;
        int parent = j/2;

        while(arr[j] < arr[parent] && parent >= 1){
            swap(arr[j], arr[parent]);
            j = parent;
            parent /= 2;
        }
    }
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

    int size = sizeof(arr)/sizeof(arr[1]);

    mean_heap(arr, size);

    print(arr, size);
    
    return 0;
}
