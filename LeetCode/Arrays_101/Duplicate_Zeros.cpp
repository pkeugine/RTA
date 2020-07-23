class Solution {
public:
	void duplicateZeros(vector<inc>& arr) {
		int sz = arr.size();
		for(int i=0; i<sz-1; i++) {
			if(!arr[i]) {
				for(int j=sz-1; j>i; j--) {
					arr[j] = arr[j-1];
				}
				arr[i] = 0;
				i++;
			}
		}
};
