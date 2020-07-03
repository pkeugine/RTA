/* WRONG WAY
#include <iostream>
using namespace std;

int main(void) {
    int a,b;
    while(1) {
        cin >> a >> b;
        if(a>10 or a<0 or b>10 or b<0) break;
        cout << a+b << '\n';
    }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(void) {
    int a,b;
    while(cin >> a >> b) {
        cout << a+b << '\n';
    }

    return 0;
}
*/

#include <iostream>
using namespace std;

int main(void) {
    int a,b;
    while(1) {
        cin >> a >> b;
        if(cin.eof()) break;
        cout << a+b << '\n';
    }

    return 0;
}