// 217. Contains Duplicate

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> sets;
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        sets.insert(nums[i]);
    }

    if(n > sets.size()){
        cout << true;
    }
    else{
        cout << false;
    }
}