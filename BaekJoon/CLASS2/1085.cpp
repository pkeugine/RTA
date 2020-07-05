#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int x, y, w, h;
    int min_v = 1000;
    cin >> x >> y >> w >> h;
    (min_v > min(x, w-x)) ? min_v = min(x, w-x) : min_v = min_v;
    (min_v > min(y, h-y)) ? min_v = min(y, h-y) : min_v = min_v;
    cout << min_v << '\n';
    return 0;
}