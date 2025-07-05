// A. Petya and Strings

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string first, second;

    cin >> first;
    cin >> second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    int n = first.length();

    if(first < second){
        cout << "-1";
    }
    else if(first > second){
        cout << "1";
    }
    else{
        cout << "0";
    }
}