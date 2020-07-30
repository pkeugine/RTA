class Solution {
public:
  int heightChecker(vector<int>& heights) {
    int answer = 0;
    vector<int> ordered(heights.begin(), heights.end());
    for(int i=0; i<heights.size(); ++i) {
      if(heights[i]!=ordered[i]) ++answer;
    }
    return answer;
  }
};
