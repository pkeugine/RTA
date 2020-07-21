#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        vector<int> a;
        vector<int> b;

        int ok = false;
        int k = 0;

        for(int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for(int i=0; i<m; i++) {
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i]==b[j]) ok = true;
                if(ok) {
                    k = i;
                    break;
                }
            }
            if(ok) break;
        }

        if(ok==false) cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
            cout << "1 " << a[k] << '\n';
        }
    }
    return 0;
}