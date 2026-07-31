#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        const int n = strs.size();
        unordered_map<string , vector<string>> m;
        vector<vector<string>>result;
        for(int i = 0;i < n;i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto x : m){
            result.push_back(x.second);
        }
        return result;
    }
};
