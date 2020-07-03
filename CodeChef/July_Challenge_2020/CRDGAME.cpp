#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int T, N;
    int chef = 0;
    int morty = 0;
    long long a, b;
    string A, B;
    cin >> T;
    while(T--) {
        chef = 0;
        morty = 0;
        cin >> N;
        while(N--) {
            a = 0;
            b = 0;
            cin >> A >> B;
            for(int i=0; i<A.length(); i++) {
                a += A[i]-48;
            }
            for(int i=0; i<B.length(); i++) {
                b += B[i]-48;
            }
            if(a>b) chef++;
            else if(a<b) morty++;
            else {
                chef++;
                morty++;
            }
        }
        if(chef>morty) cout << '0' << ' ' << chef << '\n';
        else if(chef<morty) cout << '1' << ' ' << morty << '\n';
        else cout << '2' << ' ' << chef << '\n';
    }
    return 0;
}