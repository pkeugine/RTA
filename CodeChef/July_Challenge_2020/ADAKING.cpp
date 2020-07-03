#include <iostream>
using namespace std;

int main(void) {
    int T, N;
    int count;
    char X = 'X';
    cin >> T;
    while(T--) {
        int r = 0;
        int c = 0;
        count = 0;
        /*
        char board[9][9] = {X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X,
                            X,X,X,X,X,X,X,X};
        */
        char board[9][9] = {'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X',
                            'X','X','X','X','X','X','X','X','X'};
        cin >> N;

        if(N==1) {

        } else if(N<=4) {
            count += 1;
            r=1;
        } else if(N<=9) {
            count += 4;
            r=2;
            for(int i=0; i<2; i++) {
                for(int j=0; j<2; j++) {
                    board[i][j] = '.';
                }
            }

        } else if(N<=16) {
            count += 9;
            r=3;
            for(int i=0; i<3; i++) {
                for(int j=0; j<3; j++) {
                    board[i][j] = '.';
                }
            }
        } else if(N<=25) {
            count += 16;
            r=4;
            for(int i=0; i<4; i++) {
                for(int j=0; j<4; j++) {
                    board[i][j] = '.';
                }
            }

        } else if(N<=36) {
            count += 25;
            r=5;
            for(int i=0; i<5; i++) {
                for(int j=0; j<5; j++) {
                    board[i][j] = '.';
                }
            }

        } else if(N<=49) {
            count += 36;
            r=6;
            for(int i=0; i<6; i++) {
                for(int j=0; j<6; j++) {
                    board[i][j] = '.';
                }
            }

        } else if(N<=64) {
            count += 49;
            r=7;
            for(int i=0; i<7; i++) {
                for(int j=0; j<7; j++) {
                    board[i][j] = '.';
                }
            }
        }

        while(count < N) {
            if(r>c) {
                board[r][c] = '.';
                c++;
                count++;
            } else if(r==c) {
                board[r][c] = '.';
                r--;
                count++;
            } else if(r<c) {
                board[r][c] = '.';
                r--;
                count++;
            }
        }

        board[0][0] = 'O';
        for(int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                cout << board[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}