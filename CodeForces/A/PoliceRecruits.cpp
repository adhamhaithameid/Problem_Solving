// A. Police Recruits

#include <bits/stdc++.h>

using namespace std;

int main() {
    int events = 0, crimes = 0, police = 0; 
    cin >> events;

    int arr[events]; 
    for(int i = 0; i < events; i++){
        cin >> arr[i];

        if(arr[i] == -1){
            if(police>0){
                police--;
            }
            else{
                crimes++;
            }
        }
        else{
            police += arr[i];
        }
    }

    cout << crimes;
}