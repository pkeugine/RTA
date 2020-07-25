class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3) return false;
        bool increase = true;
        for(int i=0; i<A.size()-1; i++) {
            if(increase && A[i] > A[i+1]) {
                if(i==0) return false;
                increase = !increase;
            }
            else if(!increase && A[i] < A[i+1]) return false;
            else if(A[i]==A[i+1]) return false;
        }
        if(increase) return false;
        return true;
    }
};
