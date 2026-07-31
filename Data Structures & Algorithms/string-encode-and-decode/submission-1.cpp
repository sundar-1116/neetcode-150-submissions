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
        vector<string>res;
        for(auto x : s){
            if(x != '`'){
                ss += x;
            }else{
                res.push_back(ss);
                ss = "";
            }
        }
        return res;
    }
};
