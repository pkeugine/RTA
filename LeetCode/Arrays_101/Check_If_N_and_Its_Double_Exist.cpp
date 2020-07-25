class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0; i<arr.size()-1; i++) {
            for(int j=i+1; j<arr.size(); j++) {
                int sm = min(arr[i], arr[j]);
                int bg = max(arr[i], arr[j]);
                bool iN = arr[i]>=0;
                bool jN = arr[j]>=0;
                if(iN && jN && bg==2*sm) return true;
                else if(!iN && !jN && sm==2*bg) return true;
            }
        }
        return false;
    }
};
