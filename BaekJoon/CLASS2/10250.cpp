#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    while(T--) {
        int H, W, N;
        cin >> H >> W >> N;
        int room_H;
        (N%H==0) ? room_H = H : room_H = N%H;
        int room_T;
        (N%H==0) ? room_T = N/H : room_T = N/H + 1;
        if(room_T < 10) cout << room_H << "0" << room_T << '\n';
        else cout << room_H << room_T << '\n';
    }
    return 0;
}