class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int i : nums){
            freq[i]++;
        }
        vector<pair<int, int>> f;
        for(const auto& p : freq){
            f.push_back({p.second, p.first});
        }
        vector<int> res;
        sort(f.rbegin(), f.rend());
        for(int i=0; i<k; i++){
            res.push_back(f[i].second);
        }
        return res;
    }
};
