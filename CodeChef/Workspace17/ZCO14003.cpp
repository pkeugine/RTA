#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N; cin>>N;
  vector<int> c(N);
  for(int i=0; i<N; ++i) {
    cin >> c[i];
  }
  sort(c.begin(), c.end());
  int answer = 0;
  for(int i=0; i<c.size(); ++i) {
    answer = max(answer, c[i]*((int)c.size()-i));
  }
  cout << answer << '\n';
  return 0;
}
