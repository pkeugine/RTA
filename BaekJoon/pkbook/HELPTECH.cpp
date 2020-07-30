#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortit(pair<string, pair<string, int>>& a, pair<string, pair<string, int>>& b) {
    return a.second.second < b.second.second;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        vector<pair<string, pair<string, int>>> XPM;
        double average = 0;
        for(int i=0; i<N; ++i) {
            string X;
            string P;
            int M;
            cin >> X >> P >> M;
            average += (double)M;
            XPM.push_back({X, {P, M}});
        }
        average /= (double)N;
        sort(XPM.begin(), XPM.end(), sortit);

        for(int i=0; i<N; ++i) {
            if((double)XPM[i].second.second >= average) break;
            cout << XPM[i].first << " " << XPM[i].second.first << " " << XPM[i].second.second << '\n';
        }

    }
    return 0;
}