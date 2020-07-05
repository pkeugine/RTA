#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool cmp(pair<int, string> u, pair<int, string> v) {
    return u.first < v.first;
}

int main(void) {
    int N;
    cin >> N;
    // NEED TO TELL HOW BIG THE VECTOR SHOULD BE
    vector<pair<int, string>> info(N);

    for(int i=0; i<N; i++) cin >> info[i].first >> info[i].second;

    stable_sort(info.begin(), info.end(), cmp);

    for(int i=0; i<N; i++) cout << info[i].first << ' ' << info.at(i).second << '\n';

    return 0;
}