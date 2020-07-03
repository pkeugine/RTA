#include <iostream>
using namespace std;

int main(void) {
    int N, total = 0;
    char c;
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> c;
        total += c-'0';
    }
    cout << total << '\n';
    return 0;
}