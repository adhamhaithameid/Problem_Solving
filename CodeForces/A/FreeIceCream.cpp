// A. Free Ice Cream

#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    double n = 0, d = 0, x = 0, times = 0;
    char sign;

    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> sign >> d;

        if(sign == '+'){
            x += d;
        }
        else if(sign == '-'){
            if(x < d){
                times++;
            }
            else{
                x -= d;
            }
        }
    }
    
    cout << fixed << setprecision(0) << x << " " << times;
}