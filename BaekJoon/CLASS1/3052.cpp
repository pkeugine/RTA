/*
#include <iostream>
#include <unordered_set>
using namespace std;

int main(void) {
    int N;
    int count = 0;
    unordered_set<int> S;
    for(int i=0; i<10; i++) {
        cin >> N;
        int left=N%42;
        if(!S.count(left)) {
            S.insert(left);
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}
*/

#include <iostream>
#include <unordered_set>
using namespace std;

int main(void) {
    int N;
    unordered_set<int> S;
    for(int i=0; i<10; i++) {
        cin >> N;
        S.insert(N%42);
    }
    cout << S.size() << '\n';
    return 0;
}