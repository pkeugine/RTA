#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    double a,b,c;
    cin >> a >> b;
    c = a/b;
    cout.precision(10);
    cout << c;

    /*
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%.9f", (double)a/b);
    */

    return 0;
}