class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> answer(arr.size());
        int big = 0;
        for(int i=arr.size()-1; i>0; i--) {
            big = max(big, arr[i]);
            answer[i-1] = big;
        }
        answer[answer.size()-1] = -1;
        return answer;
    }
};
