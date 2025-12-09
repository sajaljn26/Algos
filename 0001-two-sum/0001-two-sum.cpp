class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int n = nums[i];
            int t = target - n;
            if(mpp.find(t) != mpp.end()){
                return {mpp[t] , i};
            }
            mpp[n] = i;
        }
        return {};

    }
};