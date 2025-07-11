// A. Anton and Letters

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main() {
    string m;
    int l = 0;

    getline(cin, m);

    m.erase(remove(m.begin(), m.end(), '{'), m.end());
    m.erase(remove(m.begin(), m.end(), ','), m.end());
    m.erase(remove(m.begin(), m.end(), ' '), m.end());
    m.erase(remove(m.begin(), m.end(), '}'), m.end());
    
    unordered_set<char> s;

    for (int i = 0; i < m.size(); i++) {
        s.insert(m[i]);
    }

    cout << s.size();
}