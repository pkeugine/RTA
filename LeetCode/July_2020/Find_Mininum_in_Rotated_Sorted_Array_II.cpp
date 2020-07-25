class Solution {
public:
    int findMin(int<vector>& nums) {
        int answer = 2147483647;
        for(int num : nums) answer = min(answer, num);
        return answer;
    }
}
