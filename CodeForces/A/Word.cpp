// A. Word

#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int n, u = 0, l = 0;
    string word;

    cin >> word;

    n = word.size();

    for(int i = 0; i < n; i++){
        if(isupper(word[i])){
            u++;
        }
        else{
            l++;
        }
    }

    if(u > l){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else if(u < l){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    if(u == l){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }

    cout << word;
}