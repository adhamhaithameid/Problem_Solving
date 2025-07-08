// A. Colorful Stones (Simplified Edition)

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, position = 0;
    string s, t;
    
    cin >> s >> t;

    for(int i = 0; i < t.size(); i++){
        if(s[position] == t[i]){
            position++;
        }
    }

    cout << position + 1;
}