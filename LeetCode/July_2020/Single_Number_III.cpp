class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int aXORb = 0;
        for(auto item : nums) aXORb ^= item;
        int lastBit = (aXORb & (aXORb-1)) ^ aXORb; // the last bit that a diffs b
        int a = 0, b = 0;
        for(auto item : nums) {
            // based on the last bit, group the items into groupA(include a) and groupB
            if(item & lastBit) a = a ^ item;
            else b = b ^ item;
        }
        
        return vector<int>{ a, b };
    }
};
