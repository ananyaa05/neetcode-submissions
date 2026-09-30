class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>mp;
        for(const auto& s: strs){
            string sd = s;
            sort(sd.begin(), sd.end());
            mp[sd].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& pair: mp){
            res.push_back(pair.second);
        }
        return res;
    }
};
