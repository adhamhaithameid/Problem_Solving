// A. Shaass and Oskols 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    
    cin >> n;
    int lines[n], newlines[n];

    for(int i = 0; i < n; i++){
        cin >> lines[i];
    }

    for(int i = 0; i < n; i++){
        newlines[i] = lines[i];
    }

    cin >> m;
    int attackline[m], birdattacked[m];

    for(int i = 0; i < m; i++){
        cin >> attackline[i] >> birdattacked[i];
    }

    for(int i = 0; i < m; i++){
        int wire = attackline[i] - 1;
        int bird = birdattacked[i];

        if(wire > 0){
            newlines[wire - 1] += bird - 1;
        }

        if(wire < n - 1){
            newlines[wire + 1] += newlines[wire] - bird;
        }

        newlines[wire] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << newlines[i] << endl;
    }
}