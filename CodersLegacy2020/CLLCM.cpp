#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int T; cin >> T;
  while(T--) {
    string S; cin >> S;
    int Q; cin >> Q;
    vector<int> t;
    for(int i=0; i<Q; i++) {
      int temp;
      cin.clear();
      cin >> temp;
      t.push_back(temp);
    }
    int x;
    for(int i=0; i<t.size(); i++) {
      int count;
      x = 0;
      for(int j=t.at(i)-1; j<S.size(); j++) {
        if(count==0 && S.at(j)==')') {
          continue;
        }
        if(S.at(j)=='(') {
          count ++;
        }
        else if(S.at(j)==')') count--;
        if(count==0) {
          x = j+1;
          cout << x << '\n';
          break;
        }
      }
    }
    if(x==0) cout << -1 << '\n';
  }
  return 0;
}