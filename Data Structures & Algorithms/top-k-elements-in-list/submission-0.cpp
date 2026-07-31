#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto x : nums){
            m[x]++;
        }
        vector<pair<int,int>>arr;
        for(auto &x : m){
            arr.push_back({x.second, x.first});
        }
        sort(arr.begin(),arr.end());
        vector<int>res;
        const int n = arr.size();
        for(int i = 0;i<k;i++){
            res.push_back(arr[n-i-1].second);
        }
        return res;
    }
};
