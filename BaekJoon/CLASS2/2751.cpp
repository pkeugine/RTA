#include <iostream>
#include <set>
using namespace std;

int main(void) {
    int N;
    set<int> answer;
    cin >> N;
    while(N--) {
        int num;
        cin >> num;
        answer.insert(num);
    }
    for(set<int>::iterator iter=answer.begin(); iter!=answer.end(); iter++) {
        cout << (*iter) << '\n';
    }
    return 0;
}