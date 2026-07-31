#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> res;
        for (auto x : nums) {
            m[x]++;
        }
        priority_queue < pair<int, int>, vector<pair<int, int>>,
            greater < pair<int, int>>> minHeap;
        for(auto x : m){
            minHeap.push({x.second,x.first});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        for(int i = 0;i<k;i++){
            res.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return res;
    }
};
