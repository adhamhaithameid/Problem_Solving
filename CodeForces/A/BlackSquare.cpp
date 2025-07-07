// A. Black Square

#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[4], sum = 0, size;
    string m;

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    cin >> m;

    size = m.size();

    int arr2[size];

    for(int i = 0; i < size; i++){
        arr2[i] = m[i] - '0';
        arr2[i] = arr2[i] - 1;

        sum += arr[arr2[i]]; 
    }

    cout << sum;
}