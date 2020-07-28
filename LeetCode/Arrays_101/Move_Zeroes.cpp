class Solution {
public:
  void moveZeroes(vector<int>& nums) {
    int lastfill = 0;
    for(int i=0; i<nums.size(); ++i) {
      if(nums[i]) swap(nums[lastfill++], nums[i]);
    }
  }
};

/*
class Solution {
public:
  void moveZeroes(vector<int>& nums) {
    int sz = nums.size();
    int idx = 0;
    for(int i=0; i<sz; ++i) {
      if(!nums[idx]) {
        for(int j=idx; j<sz-1; ++j) {
          nums[j] = nums[j+1];
        }
        nums[sz-1] = 0;
      }
      else ++idx;
    }
  }
};
*/
