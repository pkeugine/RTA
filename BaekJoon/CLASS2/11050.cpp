#include <iostream>
using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;
  int result = 1;
  for(int i=N; i>N-K; i--) result = result*i;
  for(int i=K; i>0; i--) result = result/i;
  cout << result << '\n';
  return 0;
}