class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        const int n = nums.size();
        return s.size() != n;
    }
};