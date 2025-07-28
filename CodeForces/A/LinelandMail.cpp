// A. Lineland Mail

#include <bits/stdc++.h>
// #include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        int minimum, maximum;

        if(i == 0){
            minimum = abs(arr[i+1] - arr[i]);
        }
        else if(i == (n-1)){
            minimum = abs(arr[i] - arr[i-1]);
        }
        else{
            minimum = min(abs((arr[i+1] - arr[i])), abs((arr[i] - arr[i-1])));
        }

        maximum = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n-1]));

        cout << minimum << " " << maximum << endl;
    }

    // // set<int> s;

    // multiset<int> s;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i != j){
    //             s.insert(abs(arr[i] - arr[j]));
    //             if(s.size() == (n-1)){
    //                 int first = *s.begin();
    //                 int last = *s.rbegin();

    //                 cout << first << " " << last << endl;
    //                 s.clear();
    //             }
    //         }
    //     }
    // }
}