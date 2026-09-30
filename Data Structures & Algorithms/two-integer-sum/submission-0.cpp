class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ind;
        for(int i=0; i<nums.size(); i++){
            int diff = target - nums[i];
            if(ind.find(diff) != ind.end()){
                return {ind[diff], i};
            }
            ind.insert({nums[i], i});
        } 
        return {};
    }
};
