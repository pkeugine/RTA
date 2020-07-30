#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T, X; cin >> T >> X;
    while(T--) {
        int N; cin >> N;
        if(N<0) {
            cout << "no" << '\n';
            continue;
        }
        double check = (double)N/100;
        check *= X;
        int got = N - (int)sqrt(N) * (int)sqrt(N);
        if(check>=(double)got) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
    return 0;
}