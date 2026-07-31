class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto x : strs){
            s += x + '`';
        }
        return s;
    }

    vector<string> decode(string s) {
        string ss = "";
        vector<string>ans;
        for(auto x : s){
            if(x != '`')ss += x;
            else{
                ans.push_back(ss);
                ss = "";
            }
        }
        return ans;
    }
};
