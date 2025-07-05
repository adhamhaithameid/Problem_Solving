// A. Sereja and Dima

#include <iostream>

using namespace std;

int main(){
    int n, s = 0, d = 0, l = 0;

    cin >> n;

    int arr[n], r = n - 1;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if(arr[l] > arr[r]){
            if(i % 2 == 0){
                s += arr[l++];
            }
            else {
                d += arr[l++];
            }
        }

        else{
            if(i % 2 == 0){
                s += arr[r--];
            }
            else {
                d += arr[r--];
            }
        }
    }

    cout << s << " " << d;
}