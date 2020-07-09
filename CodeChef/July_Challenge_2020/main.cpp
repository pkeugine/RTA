//til july 13th
#include <iostream>
#include <unordered_set>
#define ll long long int
using namespace std;

int main(void) {
    int T;
    cin >> T;
    while(T--) {
        int N;
        bool flag = true;
        cin >> N;
        unordered_multiset<ll> M;
        ll a, b;
        for(int i=0; i<N; i++) {
            cin >> a;
            if(M.count(a)) {
                if(M.count(a)%2!=0)
            }
            else {
                M.insert(a);
            }
        }

    }
    return 0;
}