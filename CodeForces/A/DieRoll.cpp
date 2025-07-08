// A. Die Roll 

#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int y = 0, w = 0, denomenator = 6, numerator = 0;
    cin >> y >> w;

    numerator = (6 - max(y, w)) + 1;

    int g = gcd(numerator, denomenator);

    numerator /= g;
    denomenator /= g;

    cout << numerator << "/" << denomenator;
}