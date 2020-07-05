#include <iostream>
#include <vector>
using namespace std;

vector<int> cards;

int main(void) {
    int N;
    int count = 0;
    cin>>N;
    for(int i=1; i<=N; i++) {
        cards.push_back(i);
    }
    for(vector<int>::iterator iter = cards.begin(); iter!=cards.end(); iter++) {
        if(count%2!=0) {
            cards.push_back(*iter);
        }
        count++;
    }
    cout << cards.back() << '\n';
    return 0;
}