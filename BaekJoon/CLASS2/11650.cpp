#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(pair<int,int>, pair<int,int>);

int main(void) {
  int N;
  int a, b;
  vector<pair<int,int>> v;
  cin >> N;
  for(int i=0; i<N; i++) {

  }
  for(int i=0; i<N; i++) {
    cin >> a >> b;
    /*
    v.at(i).first = a;
    v.at(i).second = b;
    */
    v.push_back(make_pair(a,b));
  }

  sort(v.begin(), v.end(), comp);
  for(int i=0; i<N; i++) {
    cout << v.at(i).first << ' ' << v.at(i).second << '\n';
  }
  return 0;
}

bool comp(pair<int,int> x, pair<int,int> y) {
  if(x.first == y.first) return x.second < y.second;
  else return x.first < y.first;
}