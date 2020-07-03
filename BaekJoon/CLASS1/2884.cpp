#include <iostream>
using namespace std;

int main(void) {
    int H,M;
    cin >> H >> M;
    if(M>=45) cout << H << ' ' << M-45 << '\n';
    else {
        if(H==0) H=23;
        else H--;
        M = 60-(45-M);
        cout << H << ' ' << M << '\n';
    }
    return 0;
}