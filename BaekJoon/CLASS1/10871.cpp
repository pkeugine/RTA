/*
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, X, a;
    vector<int> small;
    cin >> N >> X;
    for(int i=0; i<N; i++) {
        cin >> a;
        if(a<X) small.push_back(a);
    }
    for(int i=0; i<small.size(); i++) cout << small.at(i) << ' ';
    cout << '\n';
    return 0;
}
*/

#include <iostream>
using namespace std;

int main(void) {
    int N, X, a;
    cin >> N >> X;
    for(int i=0; i<N; i++) {
        cin >> a;
        if(a<X) cout << a << ' ';
    }
    cout << '\n';
    return 0;
}