// A. Boy or Girl

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string name;
    cin >> name;

    set<char> chars;

    for (int i = 0; i < name.length(); ++i) {
        chars.insert(name[i]);
    }

    if(chars.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}