#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T; cin >> T;
  while(T--) {
    int n;
    string s;
    string answer = "abacaba";
    int possible = 0;
    cin >> n >> s;
    for(int i=0; i<n-6; i++) {
      if(s.substr(i,7) == answer) {
        possible++;
      }
    }
    for(int i=0; i<n-6; i++) {
      //if(s[i]!='a' || s[i]!='?') continue;
      int j = 0;
      int q_count = 0;
      while((s[i+j]==answer[j] || s[i+j]=='?') && j<7) {
        j++;
        if(s[i+j]=='?') q_count++;
      }
      if(j==7) {
        if(q_count!=0 && possible==0) {
          for(int r=0; r<7; r++) {
            if(s[i+r]=='?') s[i+r] = answer[r];
          }
          possible++;
        }
        else if(q_count!=0 && possible==1) {
          for(int r=0; r<7; r++) {
            if(s[i+r]=='?') s[i+r] = 'z';
          }
        }
      }
    }
    if(possible==1) {
      for(int i=0; i<n; i++) {
        if(s[i]=='?') s[i] = 'z';
      }
      cout << "Yes" << '\n' << s << '\n';
    }
    else cout << "No" << '\n';
  }
  return 0;
}
