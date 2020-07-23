class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int answer;
		for(int i=0; i<nums.size(); i++) {
			if(nums[i]==val) {
				for(int j=i; j<nums.size()-1; j++) {
					nums[j] = nums[j+1];
				}
				nums.pop_back();
				i--;
			}
		}
		answer = nums.size();
		return answer;
	}
};
