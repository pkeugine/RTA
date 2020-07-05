#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int x, int y);
int LCM(int x, int y);

int main(void) {
    int N,M;
    cin >> N >> M;
    cout << GCD(N,M) << '\n' << LCM(N, M) << '\n';
    return 0;
}

int GCD(int x, int y) {
    int gcd = 1;
    for(int i=2; i<=min(x,y); i++) {
        if(x%i==0 and y%i==0) gcd=i;
    }
    return gcd;
}
int LCM(int x, int y) {
    int lcm = x*y;
    for(int i=lcm; i>=max(x,y); i--) {
        if(i%x==0 && i%y==0) lcm = i;
    }
    return lcm;
}