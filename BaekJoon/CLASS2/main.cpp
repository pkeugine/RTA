#include <iostream>
#include <algorithm>
using namespace std;

string B[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
};
string W[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
};

string board[50];

int b_comp(int n, int m) {
    int comp = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[n+i][m+j]!=B[i][j]) comp++;
        }
    }
    return comp;
}
int w_comp(int n, int m) {
    int comp = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[n+i][m+j]!=W[i][j]) comp++;
        }
    }
    return comp;
}
int main(void) {
    int N,M;
    int min_v = 65;
    int temp;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        cin >> board[i];
    }
    for(int i=0; i+7<=N-1; i++) {
        for(int j=0; j+7<=M-1; j++) {
            temp = min(b_comp(i,j), w_comp(i,j));
        }
        if(temp<min_v) min_v = temp;
    }
    cout << min_v << '\n';
    return 0;
}