class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int n = nums.size();
        int high = n-1;
        while(high >= low){
            int mid =(low+high)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target ){
                    high = mid-1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(nums[mid] <= target && target <= nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
        }
        return -1;
        
    }
};