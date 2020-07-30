class Solution {
public:
  int leastInterval(vector<char>& tasks, int n) {
    int sz = tasks.size();
    if(!sz) return 0;
    int answer;
    map<char, int> m;
    int most = 0;
    for(char c : tasks) most = max(most, ++m[c]);
    answer = (most-1) * (n+1);
    for(auto e : m) {
      if(e.second==most) ++answer;
    }
    return max(answer, sz);
  }
};
