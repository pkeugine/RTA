#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        for(int j=0; j<i; j++) {
            cout << '*';
            if(j==i-1) cout << '\n';
        }
        //cout << '\n';
    }
    return 0;
}