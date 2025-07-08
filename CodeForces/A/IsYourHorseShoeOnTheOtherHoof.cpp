// A. Is your horseshoe on the other hoof?

#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 0, arr[4];

    for(int i = 0; i < 4; i++){
        cin >> arr[i];
    }

    if(arr[0] == arr[1] || arr[0] == arr[2] || arr[0] == arr[3]){
        count++;
    }
    if( arr[1] == arr[2] || arr[1] == arr[3]){
        count++;
    }
    if(arr[2] == arr[3]){
        count++;
    }

    cout << count;
}