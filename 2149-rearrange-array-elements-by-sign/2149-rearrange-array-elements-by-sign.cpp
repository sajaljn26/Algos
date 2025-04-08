class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int negative = 1;
        int positive = 0;
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0){
                ans[negative] = nums[i];
                negative += 2;
            }else{
                ans[positive] = nums[i];
                positive += 2;
            }
        }
        return ans;
    }
};