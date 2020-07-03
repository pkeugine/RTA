/*
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    int count = 1;
    getline(cin, s);
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ' && i!=0 && i!=s.length()-1) count++;
    }
    if((s.length()==2 && s[0] == ' ' && s[1] == ' ') || s.length()==0) count = 0;
    cout << count << '\n';
    return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string s;
    int count = 0;
    getline(cin, s);
    for(int i=0; i<s.length(); i++) {
        if(s[i] == ' ') count++;
    }
    if(s.length() == 0 ) cout << count << '\n';
    else {
        count++;
        if(s[0] == ' ') count --;
        if(s[s.length()-1] == ' ') count --;
        cout << count << '\n';
    }
    return 0;
}