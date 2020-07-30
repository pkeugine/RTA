#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        string W, I;
        cin >> W >> I;
        string tmpW, tmpI;
        for(char c : W) {
            if(c!=',') tmpW += c;
        }
        for(char c : I) {
            if(c!=',') tmpI += c;
        }
        if(tmpW==tmpI) cout << "equal" << '\n';
        else cout << "different" << '\n';
    }
    return 0;
}
