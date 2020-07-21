//NOT FINISHED!!!!

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string a, b;
int many = 0;
vector<int> place;

void trans(string s, string cmp) {
    for(int i=s.size()-1; i>=0; i--) {
        if(s[i]!=cmp[i]) {
            s = s.substr(0, i+1);
            cmp = cmp.substr(0, i+1);
            if(s[0]==cmp[cmp.length()-1]) {
                if(s[0]==1) s[0] = 0;
                else s[0] = 1;
            }
            many++;
            place.push_back(i);
            reverse(s.begin(), s.end());
            trans(s, cmp);
            break;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) {
        many = 0;
        place.clear();
        int n; cin >> n;
        cin >> a >> b;

        trans(a, b);

        if(many > 0) {
            cout << many;
            for(auto v : place) {
                cout << " " << v;
            }
        }
        else cout << many << '\n';
    }
    return 0;
}
