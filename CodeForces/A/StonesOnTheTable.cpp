// A. Stones on the Table

#include <iostream>

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c = 0;
    string m;

    cin >> n;
    cin >> m;

    for(int i = 1; i < n; i++){
        if(m[i] == m[i - 1]){
            c++;
        }
    }

    cout << c;
}