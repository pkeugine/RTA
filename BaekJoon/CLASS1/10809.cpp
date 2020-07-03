#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    string s;
    int alphabet[26];
    fill_n(alphabet, 26, -1);
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        if(alphabet[s[i]-97]==-1) alphabet[s[i]-97]=i;
    }
    for(int i=0; i<26; i++) {
        cout << alphabet[i] << ' ';
    }
    return 0;
}