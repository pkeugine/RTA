class Solution {
public:
    int findNumbers(vector<int>& nums) {
      ios_base::sync_with_stdio(0);
      cin.tie(nullptr);
      cout.tie(nullptr);
      int answer = 0;
      for(auto i : nums) {
        string temp = to_string(i);
        if(temp.length()%2==0) answer++;
      }
      return answer;
    }
};
