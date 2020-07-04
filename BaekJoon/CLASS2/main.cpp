#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, M;
vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    cin >> M;
    for(int i=0; i<M; i++) {
        int num;
        cin >> num;
        cout << binary_search(v.begin(), v.end(), num) << '\n';
    }
    return 0;
}
