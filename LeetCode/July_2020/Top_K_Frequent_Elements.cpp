class Solution {
public:
    static bool compare(pair<int,int>& p1, pair<int,int>& p2) {
        return p1.second > p2.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //unordered map of <int, int>
        unordered_map<int,int> table;
        //answer int vector
        vector<int> answer;
        
        //for nums size, unordered map up up
        for(int i=0; i<nums.size(); i++) {
            table[nums[i]]++;
        }
        //temporary vector of pair <int, int>
        vector<pair<int,int>> temp;
        //for each element in unordered map, make it pair
        for(auto i : table) {
            pair<int,int> p = make_pair(i.first, i.second);
            temp.push_back(p);
        }
        //sort it, and put them in answer
        std::sort(temp.begin(), temp.end(), compare);
        
        for(int i=0; i<k; i++) answer.push_back(temp[i].first);
        
        return answer;
    }
};
