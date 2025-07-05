// A. Magnets

#include <iostream>

using namespace std;

int main(){
    int n, groups = 0;

    string current, prev;;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> current;

        if(current != prev){
            groups++;
            prev = current;
        }
    }

    cout << groups;
}