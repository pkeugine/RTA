/* PASSES ONLY SUBTASK #1
#include <iostream>
using namespace std;

int main(void) {
    int T, N;
    int x_count, y_count;
    cin >> T;
    while(T--) {
        x_count = 1;
        y_count = 1;
        cin >> N;
        int x[4*N];
        int y[4*N];
        for(int i=0; i<4*N-1; i++) {
            cin >> x[i] >> y[i];
        }
        for(int i=0; i<4*N-1; i++) {
            for(int j=0; j<4*N-1; j++) {
                if(i==j) continue;
                if(x[i]==x[j]) x_count++;
            }
            if(x_count%2!=0) {
                x[4*N-1] = x[i];
            }
            x_count = 1;
        }
        for(int i=0; i<4*N-1; i++) {
            for(int j=0; j<4*N-1; j++) {
                if(i==j) continue;
                if(y[i]==y[j]) y_count++;
            }
            if(y_count%2!=0) {
                y[4*N-1] = y[i];
            }
            y_count = 1;
        }
        cout << x[4*N-1] << ' ' << y[4*N-1] << '\n';
    }
    return 0;
}
*/

#include <iostream>
#include <unordered_set>
#define ll long long int
using namespace std;

int main(void) {
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        unordered_set<ll> x,y;
        for(int i=0; i<4*N-1; i++) {
            ll a, b;
            cin >> a >> b;
            if(x.count(a)) {
                x.erase(a);
            }
            else {
                x.insert(a);
            }
            if(y.count(b)) {
                y.erase(b);
            }
            else {
                y.insert(b);
            }
        }
        cout << (*x.begin()) << " " << (*y.begin()) << '\n';
    }
    return 0;
}