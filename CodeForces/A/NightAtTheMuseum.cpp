// A. Night at the Museum 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    string word;
    char current = 'a';

    cin >> word;

    for(int i = 0; i < word.size(); i++){
        int diff = abs(word[i] - current);
        sum += min(diff, 26 - diff);
        current = word[i];
    }

    cout << sum;
}