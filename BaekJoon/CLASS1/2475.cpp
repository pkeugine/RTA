#include <iostream>
using namespace std;

int main(void) {
    int N, total = 0;
    for(int i=0; i<5; i++) {
        cin >> N;
        total += N*N;
    }
    cout << total%10 << '\n';
    return 0;
}