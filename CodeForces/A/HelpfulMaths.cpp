// A. Helpful Maths 

#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, c;
    cin >> n;
    
    n.erase(remove(n.begin(), n.end(), '+'), n.end());
    
    int m[n.size()];

    
    for(int i = 0; i < n.size(); i++){
        c = n[i];

        m[i] = stoi(c);
    }

        int f = sizeof(m) / sizeof(m[0]);
        sort(m, m + f);

    for(int i = 0; i < n.size(); i++){
        cout << m[i];

        if(i != (n.size()-1)){
            cout << '+';
        }
    }
}