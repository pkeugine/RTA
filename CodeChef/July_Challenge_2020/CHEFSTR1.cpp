#include <iostream>
using namespace std;

int main(void) {
    int T, N;
    long long total = 0;

    cin >> T;
    for(int i=0; i<T; i++) {
        total = 0;
        cin >> N;
        int S[N];
        for(int j=0; j<N; j++) {
            cin >> S[j];
        }
        for(int k=1; k<N; k++) {
            (S[k] - S[k-1] > 0) ? total += S[k] - S[k-1] - 1 : total += -S[k] + S[k-1] - 1;
        }
        cout << total << '\n';
    }
    return 0;
}