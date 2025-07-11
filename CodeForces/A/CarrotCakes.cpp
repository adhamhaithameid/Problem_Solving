// A. Carrot Cakes 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    
    int time = ((t+d)/t);
    
    if((time * k) < n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
    
    // int g;
    // int firstcake = 0, secondcake = 0, time = 0;

    // while(true){
    //     time++;
        // if(time>0 ){
        //     if(time == t){
        //         cakes += k;
        //         if(cakes == n){
        //             time = 0;
        //         }
        //     }
        // }
    //     if(time > 0 && firstcake < n){
    //         firstcake += k;
    //         if(firstcake >= n){
    //             break;
    //         }
    //     }
    //     if(time > d && time < t && secondcake < n){
    //         secondcake += k;
    //         if(secondcake >= n){
    //             break;
    //         }
    //     }
    // }

    // if(firstcake < secondcake){
    //     cout << "YES";
    // }
    // else{
    //     cout << "NO";
    // }

    // g = n / k; 
    // cout << ((t*k)*g) << (((t*k)*g)+d);
    // if(((t*k)*g) > ((((t*k)*g) / 2) + d)){
    //     cout << "NO";
    // }else{
    //     cout << "YES";
    // }