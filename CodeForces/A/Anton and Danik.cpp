// A. Anton and Danik

#include <iostream>
using namespace std;

int main(){
    int n = 0, A = 0, D = 0;
    string m;

    cout << "enter the number of games" << endl;
    cin >> n;

    cout << "enter who win" << endl;
    cin >> m;

    for (int i = 0; i < n; i++) {
        if (m[i] == 'A') {
            A++;
        } else if (m[i] == 'D') {
            D++;
        }
    }

    if(A > D){
        cout << "Anton";
    }
    else if(A < D){
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }

    return 0;
}