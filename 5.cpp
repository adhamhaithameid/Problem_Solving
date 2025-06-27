// A - Beautiful Matrix

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, j, arr[5][5], x = 0, y = 0, s = 0;

    for(i = 0; i < 5; ++i){
        for(j = 0; j < 5; ++j){
            cin >> arr[i][j];
        }
    }

// for (int i = 0; i < 5; ++i) {
//         for (int j = 0; j < 5; ++j) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

    for (int i = 0; i < 5 ;++i){
        for(j = 0; j < 5; ++j){
            if (arr[i][j] == 1){
                x = i - 2;
                y = j - 2;
            }
        }
    }

        s = abs(x) + abs(y);
cout << endl << s << endl;
}