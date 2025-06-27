// A - Team

#include <iostream>
using namespace std;

int main(){
    int p = 0, v = 0, t = 0, n = 0, s = 0, o = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> p;
        cin >> v;
        cin >> t;

        s = p + v + t;
        if (s > 1){
            o += 1;
        }
    }
    cout << o;
}