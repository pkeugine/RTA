#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string a,b;
    int a_n, b_n;
    char temp;
    cin >> a >> b;
    temp = a[2];
    a[2] = a[0];
    a[0] = temp;
    temp = b[2];
    b[2] = b[0];
    b[0] = temp;
    a_n = stoi(a);
    b_n = stoi(b);
    (a_n > b_n) ? cout << a_n << '\n' : cout << b_n << '\n';
    return 0;
}