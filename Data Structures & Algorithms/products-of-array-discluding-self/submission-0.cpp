class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1, zc=0;
        for(int n: nums){
            if(n!=0){
                prod*=n;
            } else{
                zc++;
            }
        }
        if(zc>1){
            return vector<int>(nums.size(), 0);
        }
        vector<int> res(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(zc>0){
                if(nums[i]==0){
                    res[i]=prod;
                } else {
                    res[i]=0;
                }
            } else{
                res[i]= prod/nums[i];
            }
        }
        return res;
    }
};
