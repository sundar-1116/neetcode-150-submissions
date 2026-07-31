class Solution {
public:
static bool comp(pair<int,int> a, pair<int,int> b){
    return a.first > b.first;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        for(auto x : nums){
            count[x]++;
        }
        vector<pair<int,int>> arr;
        for(auto&p : count){
            arr.push_back({p.second,p.first});
        }
        sort(arr.begin(),arr.end(),comp);
        vector<int>ans;
        for(int i = 0;i < k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
