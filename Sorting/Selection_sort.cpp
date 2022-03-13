#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr{60, 24, 4, 38, 63, 15, 9, 49, 75, 23, 99, 8, 72, 2, 83, 64, 55, 98, 67, 84, 57, 87, 89, 54, 66, 93,
                        52, 28, 65, 77, 3, 81, 16, 27, 95, 22, 74, 36, 100, 43, 71, 17, 94, 79, 35, 80, 32, 40, 53, 39};

    for(int i = 0; i < arr.size()-1; i++){
        int MIN = i;

        for(int j = i+1; j < arr.size(); j++){
            if(arr[MIN] > arr[j]) MIN = j;
        }
        swap(arr[MIN], arr[i]);
    }

    for(auto x: arr) cout << x << " ";
    
    cout << endl;

    return 0;
}