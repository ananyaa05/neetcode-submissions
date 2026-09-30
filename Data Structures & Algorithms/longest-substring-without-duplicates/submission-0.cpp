class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> rs;
        int l=0, res=0;
        for(int r=0; r<s.length(); r++){
            while(rs.find(s[r])!=rs.end()){
                rs.erase(s[l]);
                l++;
            }
            rs.insert(s[r]);
            res=max(res, (int)rs.size());
        }
        
        return res;
    }
};
