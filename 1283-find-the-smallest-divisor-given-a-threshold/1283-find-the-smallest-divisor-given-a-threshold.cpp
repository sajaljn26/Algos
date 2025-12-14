class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        while(high > low){
            int mid = low + (high - low)/2;
            long long a = 0;
            for(int n : nums){
                a += (n+mid-1)/mid;
            }
            if(a <= threshold){
                high = mid;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};