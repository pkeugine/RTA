#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    char S[21];
    int R;
    for(int i=0; i<T; i++) {
        R = 0;
        cin >> R >> S;
        for(int j=0; j<strlen(S); j++) {
            for(int k=0; k<R; k++) {
                cout << S[j];
            }
        }
        cout << '\n';
    }
    return 0;
}