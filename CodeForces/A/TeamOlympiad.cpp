// A. Team Olympiad 

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ones, twos, threes;

    for (int i = 0; i < n; i++) {
        int skill;
        cin >> skill;

        if (skill == 1) ones.push_back(i + 1);  // Store 1-based index
        else if (skill == 2) twos.push_back(i + 1);
        else if (skill == 3) threes.push_back(i + 1);
    }

    int groups = min({ones.size(), twos.size(), threes.size()});
    cout << groups << endl;

    for (int i = 0; i < groups; i++) {
        cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
    }

    return 0;
}


// int main() {
//     int n, teams = 0, groups = 0, one = 0, two = 0, three = 0;
//     cin >> n;
    
//     int students[n], ones[n], twos[n], threes[n];
//     for(int i = 0; i < n; i++){
//         cin >> students[i];
//     }

//     for(int i = 0; i < n; i++){
//         if(students[i] == 1){
//             one++;
//             ones[i] += i;
//         }
//         if(students[i] == 2){
//             two++;
//             twos[i] += i;
//         }
//         if(students[i] == 3){
//             three++;
//             threes[i] += i;
//         }

//         if(one > 0 && two > 0 && three > 0){
//             groups++;
//             one -= 1;
//             two -= 1;
//             three -= 1;
//         }
//     }

//     cout << groups << endl;

//     for(int i = 0; i < groups; i++){
//         cout << ones[i]+1 << " " << twos[i]+1 << " " << threes[i]+1 << endl;
//     }
// }

