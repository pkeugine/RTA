#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    int n = 0;
    int count = 0;

    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    cout << s << '\n';
    return 0;
}