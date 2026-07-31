class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(auto x : nums){
            s.insert(x);
        }
        const int n = nums.size();
        return s.size() != n;
    }
};