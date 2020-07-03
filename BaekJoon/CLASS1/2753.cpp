#include <iostream>
using namespace std;

int main(void) {
    int year;
    cin >> year;
    (year%4==0 && (year%100!=0 || year%400==0)) ? cout << '1' << '\n' : cout << '0' << '\n';
    return 0;
}