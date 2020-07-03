/*
#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    int a,b;
    for(int i=0; i<T; i++) {
        cin >> a >> b;
        cout << a+b << '\n';
    }
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    int a,b,answer[T];
    for(int i=0; i<T; i++) {
        cin >> a >> b;
        answer[i] = a+b;
    }
    for(int i=0; i<T; i++) {
        cout << answer[i] << '\n';
    }
    return 0;
}