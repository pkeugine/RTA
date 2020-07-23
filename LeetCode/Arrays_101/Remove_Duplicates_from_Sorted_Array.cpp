class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int answer;
        int duplicate = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]==nums[i-1]) duplicate++;
            else nums[i-duplicate] = nums[i];
        }
        nums.erase(nums.end()-duplicate, nums.end());
        answer = nums.size();
        return answer;
    }
};
