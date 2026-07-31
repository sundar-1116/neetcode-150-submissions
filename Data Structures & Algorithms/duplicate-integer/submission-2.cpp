class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        const int n = nums.size();
        unordered_set<int>s;
        for(auto x : nums){
            if(s.find(x) != s.end())return true;
            s.insert(x);
        }
        return false;
    }
};