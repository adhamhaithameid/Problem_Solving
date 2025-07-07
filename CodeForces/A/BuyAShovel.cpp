// A. Buy a Shovel 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int price, change, LastDigit, times = 1, total;
    cin >> price >> change;

    for(int i = 1; i <= 10; i++){
        total = price * times;
        LastDigit = total % 10;

        if(LastDigit == 0 || LastDigit == change){
            break;
        }

        times++;
    }

    cout << times;
}