// A. Gravity Flip

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x = 0;
    
    cin >> x;
    
    int* arr = new int[x];

    for(int i = 0; i < x; i++){
        cin >> arr[i];
    }

    sort(arr, arr+x);

    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
}