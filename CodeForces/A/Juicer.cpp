// A. Juicer 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b, d, sum = 0, waste = 0, orange = 0;
    cin >> n >> b >> d;
    
    
    for(int i = 0; i < n; i++){
        cin >> orange;

        if(orange <= b){
            sum += orange;
        }

        if(sum > d){
            waste++;
            sum = 0;
        }

    }

    cout << waste;
}