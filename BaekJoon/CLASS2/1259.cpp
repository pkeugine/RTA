#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s = "T";
    string answer = "yes";
    while(1) {
        string answer = "yes";
        cin >> s;
        if(s=="0") break;
        for(int i=0; i<s.size(); i++) {
            if(s[i]!=s[s.size()-1-i]) answer = "no";
        }
        cout << answer << '\n';
    }
    return 0;
}