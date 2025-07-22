// A. New Password

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        char ch = 'a' + i % k;
        cout << ch;
    }
}