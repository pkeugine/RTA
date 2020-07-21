#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> pile;
        int count = 0;
        for(int i=0; i<n; i++) {
            int tmp;
            cin >> tmp;
            pile.push_back(tmp);
        }
        for(int i=0; i<n; i++) {
            count++;
            if(pile[i]>1) {
                break;
            }
        }
        if(count%2==1) cout << "First" << '\n';
        else cout << "Second" << '\n';
    }
    return 0;
}