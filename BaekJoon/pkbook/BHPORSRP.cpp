#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int T; cin >> T;
    cin.ignore();
    string berhampore = "berhampore";
    string serampore = "serampore";
    while(T--) {
        string S;
        bool b = false;
        bool s = false;
        getline(cin, S);
        transform(S.begin(), S.end(), S.begin(), [](unsigned char c){ return tolower(c); });

        for(int i=0; i<S.length(); ++i) {
            if(S[i]=='b' && S.length()-i>=berhampore.length()) {
                for(int j=0; j<berhampore.length(); ++j) {
                    if(berhampore[j]!=S[i+j]) break;
                    if(j==berhampore.length()-1) b = true;
                }
            }
            if(S[i]=='s' && S.length()-i>=serampore.length()) {
                for(int j=0; j<serampore.length(); ++j) {
                    if(serampore[j]!=S[i+j]) break;
                    if(j==serampore.length()-1) s = true;
                }
            }
        }

        if(b && s) cout << "Both" << '\n';
        else if(!b && !s) cout << "Others" << '\n';
        else if(b && !s) cout << "GCETTB" << '\n';
        else if(!b && s) cout << "GCETTS" << '\n';
    }
    return 0;
}