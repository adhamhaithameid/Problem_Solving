// A. Bear and Big Brother

#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 0, c = 1;

    cin >> a;
    cin >> b;

    while (a < b){
        a = a * 3;
        b = b * 2;

        if (a < b){
            c++;
        }
        if (a == b){
            c++;
        }
    }

    cout << c;
}