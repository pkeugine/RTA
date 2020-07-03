#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int a, total = 1;
    int num[10] = {0};
    string s_total;
    for(int i=0; i<3; i++) {
        cin >> a;
        total = total * a;
    }
    s_total = to_string(total);
    for(int i=0; i<s_total.length(); i++) {
        num[s_total[i]-48]++;
    }
    for(int i=0; i<10; i++) {
        cout << num[i] << '\n';
    }
    return 0;
}
