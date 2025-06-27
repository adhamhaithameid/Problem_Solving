// A - Vanya and Fence

#include <iostream>
using namespace std;

int main() {
    cout << "a7a2 ";
    int n, h, w = 0;
    cin >> n >> h;
    int arr[n];

    for (int i = 0; i < n ;i++){
        cin >> arr[i];
        if (arr[i] <= h){
            w += 1;
        }
        else{
            w += 2;
        }
    }
    cout << w;
}
