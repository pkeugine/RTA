#include <functional>

class Solution {
public:
  int thirdMax(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int sz = nums.size();
    if(sz<3) return nums[0];
    vector<int>::iterator it = unique(nums.begin(), nums.end());
    nums.resize(nums.begin(), it);
    return (nums.size()>2) ? nums[2] : nums[0];
  }
};
