/*
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N, M;
    int a, b;
    a = 0;
    b = 0;
    string line;
    cin >> N >> M;
    for(int j=0; j<N; j++) {
        cin >> line;
        for(int i=0; i<M; i++) {
            if (j % 2 == 0) {
                if (i % 2 == 0) {
                    if (line[i] == 'B') a++;
                    if (line[i] == 'W') b++;
                } else if (i % 2 == 1) {
                    if (line[i] == 'W') a++;
                    if (line[i] == 'B') b++;
                }
            }
            if (j % 2 == 1) {
                if (i % 2 == 0) {
                    if (line[i] == 'W') a++;
                    if (line[i] == 'B') b++;
                } else if (i % 2 == 1) {
                    if (line[i] == 'B') a++;
                    if (line[i] == 'W') b++;
                }

            }
        }
    }
    cout << a << '\n' << b << '\n';
    //(a>b) ? cout << b << '\n' : cout << a << '\n';
    return 0;
}
*/

/*
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

string W[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string B[8] = {
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
int w_cnt(int x, int y);
int b_cnt(int x, int y);

int main(void) {
    int min_val = 12345;
    pair<int, int> p1;
    cin >> p1.first >> p1.second;
    for(int i=0; i<p1.first; i++) cin >> board[i];
    for(int i=0; i+8<=p1.first; i++) {
        for(int j=0; j+8<=p1.second; j++) {
            int tmp;
            tmp = min(w_cnt(i,j), b_cnt(i,j));
            if(tmp < min_val) min_val = tmp;
        }
    }
    cout << min_val;
    return 0;
}

int w_cnt(int x, int y) {
    int cnt = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[x+i][y+j]!=W[i][j]) cnt++;
        }
    }
    return cnt;
}
int b_cnt(int x, int y) {
    int cnt = 0;
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(board[x+i][y+j]!=B[i][j]) cnt++;
        }
    }
    return cnt;
}
*/

#include <iostream>
#include <algorithm>
using namespace std;
/*
string W[8] = {

};
string B[8] = {

};
*/
string board[50];

int b_cnt(int n, int m) {
    int cnt = 0;
    for(int j=0; j<8; j++) {
        for(int i=0; i<8; i++) {
            if (j % 2 == 0) {
                if (i % 2 == 0) {
                    if (board[j+n][i+m] == 'W') cnt++;
                } else if (i % 2 == 1) {
                    if (board[j+n][i+m] == 'B') cnt++;
                }
            }
            if (j % 2 == 1) {
                if (i % 2 == 0) {
                    if (board[j+n][i+m] == 'B') cnt++;
                } else if (i % 2 == 1) {
                    if (board[j+n][i+m] == 'W') cnt++;
                }
            }
        }
    }
    return cnt;
}
int w_cnt(int n, int m) {
    int cnt = 0;
    for(int j=0; j<8; j++) {
        for(int i=0; i<8; i++) {
            if (j % 2 == 0) {
                if (i % 2 == 0) {
                    if (board[j+n][i+m] == 'B') cnt++;
                } else if (i % 2 == 1) {
                    if (board[j+n][i+m] == 'W') cnt++;
                }
            }
            if (j % 2 == 1) {
                if (i % 2 == 0) {
                    if (board[j+n][i+m] == 'W') cnt++;
                } else if (i % 2 == 1) {
                    if (board[j+n][i+m] == 'B') cnt++;
                }
            }
        }
    }
    return cnt;
}
int main(void) {
    int N, M;
    int min_val;
    int answer = 65;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        cin >> board[i];
    }
    for(int i=0; i+8<=N; i++) {
        for(int j=0; j+8<=M; j++) {
            min_val = min(b_cnt(i,j), w_cnt(i,j));
            //cout << min_val << '\n';
            if(min_val < answer) answer = min_val;
        }
    }
    cout << answer << '\n';
    return 0;
}