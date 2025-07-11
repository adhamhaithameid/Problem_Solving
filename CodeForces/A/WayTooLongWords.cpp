// A. Way Too Long Words 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c = 0;
    string word, nword;
    char first, last;
    
    cin >> n;
    string words[n];

    for(int i = 0; i < n; i++){
        cin >> word;

        nword = "";
        c = word.size();

        if(c > 10){
            first = word[0];
            last = word[c-1];
            nword += first;
            nword += to_string(c - 2);
            nword += last;
            words[i] = nword;
        }
        else{
            words[i] = word;
        }
    }

    for(int i = 0; i < n; i++){
        cout << words[i] << endl;
    }
}