#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto x : nums){
            count[x]++;
        }
        vector<vector<int>>bucket(nums.size() + 1);
        for(auto x : count){
            bucket[x.second].push_back(x.first);
        }
        vector<int>res;
        for(int i = bucket.size() - 1; i > 0; i--){
            for(auto x : bucket[i]){
                res.push_back(x);
                if(res.size() == k)return res;
            }
        }
        return res;
    }
};
