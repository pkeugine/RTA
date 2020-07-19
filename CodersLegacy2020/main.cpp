#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int T; cin>>T;
  while(T--) {
    int N; cin >> N;
    vector<int> wall;
    vector<int> test;
    for(int i=0; i<N; i++) {
      int tmp;
      cin >> tmp;
      wall.push_back(tmp);
    }
    int Q; cin >> Q;
    for(int i=0; i<Q; i++) {
      int x, y;
      cin >> x >> y;
      test.push_back(x + y);
    }
    sort(test.begin(), test.end(), greater<int>());
    int n = 0;
    for(int i=0; i<wall.size(); i++) {
      while(test.at(n)<wall.at(i)) {
        cout << i << '\n';
        n++;
      }
      if(test.at(n)==wall.at(i)) {
        cout << "-1" << '\n';
        n++;
      }
      if(test.at(n)>wall.at(i) && i==wall.size()-1) {
        while(n<test.size()) {
          cout << i+1 << '\n';
          n++;
        }
      }
    }
  }
  return 0;
}