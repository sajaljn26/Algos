class Solution {
public:
    int atmostk(vector<int>& nums , int k){
        int l =0 ;
        int r = 0;
        int oddcnt =0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]%2 == 1) k--;
            while(k<0){
                if(nums[l]%2 == 1) k++;
                l++;
            }
            oddcnt += (r-l+1);
        }
        return oddcnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
};