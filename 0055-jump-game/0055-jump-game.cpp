class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(i > farthest) return false;
            farthest = max(farthest,i + nums[i]);
            if(i == n-1){
                return true;
            }
        }
        return false;

    }
};