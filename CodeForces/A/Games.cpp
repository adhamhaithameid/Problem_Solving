// A. Games 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, change = 0;
    cin >> n;

    int arr[n], arr2[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i] >> arr2[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == arr2[j]){
                change++;
            }
        }
    }

    cout << change;
}